//
// Created by Jasmin Gagnon on 2/15/23.
//

#ifndef CPP_BASE_HPP
#define CPP_BASE_HPP

#include <cstdlib>
#include <iostream>

class Base {
public :
    virtual ~Base();
};

class A : public Base {
public :
    A();
    ~A();
};

class B : public Base {
public :
    B();
    ~B();
};

class C : public Base {
public :
    C();
    ~C();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif //CPP_BASE_HPP
