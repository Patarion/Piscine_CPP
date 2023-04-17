#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << "On vient de recevoir un dude déguiser en chat" << std::endl;
}

WrongCat::WrongCat(WrongCat &cpy) : WrongAnimal(cpy) {
    std::cout << "S'pas en clonant le mauvais chat que tu va avoir le bon" << std::endl;
    *this = cpy;
}

WrongCat::~WrongCat() {
    std::cout << "Si t'aimais pas les OGM ben v'là un clone de chat mourru..." << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << getType() << " est entrain de se balancer sur une toile d'araignée" << std::endl;
}
