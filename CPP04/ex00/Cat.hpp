#include "Animal.hpp"


#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP

class Cat : public Animal {
public :
    Cat();
    Cat(Cat &cpy);
    ~Cat();
    void makeSound() const;
};

std::ostream & operator<<(std::ostream &out, Cat const &val);

#endif //CPP_CAT_HPP
