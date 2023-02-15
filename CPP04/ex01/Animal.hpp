
#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP

#include <iostream>

class Animal {
public :
    Animal(std::string s_type);
    Animal(Animal &cpy);
    virtual ~Animal();
    std::string     getType() const;
    virtual void    makeSound() const;
    virtual void    getIdeas() const;

protected:
    std::string type;
};

#endif //CPP_ANIMAL_HPP
