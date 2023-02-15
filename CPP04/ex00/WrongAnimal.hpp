
#ifndef CPP_WRONGANIMAL_HPP
#define CPP_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public :
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &cpy);
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
protected :
    std::string type;
};

std::ostream & operator<<(std::ostream &out, WrongAnimal const &val);

#endif //CPP_WRONGANIMAL_HPP
