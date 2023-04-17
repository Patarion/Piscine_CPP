
#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <iostream>

class Animal {
public :
    Animal(std::string type);
    Animal(Animal &cpy);
    virtual ~Animal();
    std::string     getType() const;
    virtual void    makeSound() const;
    virtual void    getBrain() const;

    Animal &operator=(Animal &cpy);

protected:
    std::string type;
};

std::ostream & operator<<(std::ostream &out, Animal const &val);

#endif //CPP_ANIMAL_HPP
