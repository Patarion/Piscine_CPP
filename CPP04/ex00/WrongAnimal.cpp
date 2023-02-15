#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "L'animal sera pas bon faites attention!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &cpy) {
    std::cout << "S'pas en clonant le mauvais animal que tu va avoir le bon" << std::endl;
    *this = cpy;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Si t'aimais pas les OGM ben v'là un clone de mourru" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (type + " la balançoire");
}

void WrongAnimal::makeSound() const {
    std::cout << getType() << " est entrain de se balancer sur une toile d'araignée" << std::endl;
}
