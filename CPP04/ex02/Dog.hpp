#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

class Dog : public Animal {
public :
    Dog();
    Dog(Dog &cpy);
    ~Dog();
    void makeSound() const;
    void getBrain() const;

    Dog &operator=(Dog &cpy);

private :
    Brain *intel;
};

#endif //CPP_DOG_HPP
