#include "Animal.hpp"

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP

class Dog : public Animal {
public :
    Dog();
    Dog(Dog &cpy);
    ~Dog();
    void makeSound() const;
};

std::ostream & operator<<(std::ostream &out, Dog const &val);

#endif //CPP_DOG_HPP
