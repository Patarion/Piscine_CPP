
#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <iostream>

class Animal {
public :
    Animal(std::string s_type);
    Animal(Animal &cpy);
    virtual ~Animal();
    std::string     getType() const;
    virtual void    makeSound() const = 0;
    virtual void    getIdeas() const = 0;

protected:
    std::string type;
};

#endif //CPP_ANIMAL_HPP
