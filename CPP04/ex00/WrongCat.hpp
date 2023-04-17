
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

#endif //CPP_WRONGCAT_HPP
