
#ifndef CPP_WRONGCAT_HPP
#define CPP_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat(std::string type);
    WrongCat(WrongCat &cpy);
    ~WrongCat();
    void makeSound() const;
};

std::ostream & operator<<(std::ostream &out, WrongCat const &val);

#endif //CPP_WRONGCAT_HPP
