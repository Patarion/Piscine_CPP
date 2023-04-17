#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

class Cat : public Animal {
public :
    Cat();
    Cat(Cat &cpy);
    ~Cat();
    void makeSound() const;
    void getBrain() const;

    Cat & operator=(Cat &cpy);
private :
    Brain *intel;
};

#endif //CPP_CAT_HPP
