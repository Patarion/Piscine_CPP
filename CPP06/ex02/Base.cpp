//
// Created by Jasmin Gagnon on 2/15/23.
//

#include "Base.hpp"

Base::~Base(){

}

A::A() {

}

A::~A(){

}

B::B() {

}

B::~B(){

}

C::C(){

}

C::~C(){

}

Base *generate(void)
{
    int i;
    Base *r_inst;

    r_inst = NULL;
    i = rand() % 3;
    if (i == 0)
    {
        r_inst = new A();
    }
    else if (i == 1)
    {
        r_inst = new B();
    }
    else if (i == 2)
    {
        r_inst = new C();
    }
    return (r_inst);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "Instance A présente" << std::endl;
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "Instance B présente" << std::endl;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "Instance C présente" << std::endl;
    }
    else
    {
        std::cout << "Wrong instance or class in parameter" << std::endl;
    }
}
void identify(Base &p)
{
    try {
        Base &r_cast = dynamic_cast<A&>(p);
        static_cast<void>(r_cast);
        std::cout << "Instance référée est A" << std::endl;
    }
    catch (std::bad_cast) {
    }
    try {
        Base &r_cast = dynamic_cast<B&>(p);
        static_cast<void>(r_cast);
        std::cout << "Instance référée est B" << std::endl;
    }
    catch (std::bad_cast) {

    }
    try {
        Base &r_cast = dynamic_cast<C&>(p);
        static_cast<void>(r_cast);
        std::cout << "Instance référée est C" << std::endl;
    }
    catch (std::bad_cast) {

    }
}