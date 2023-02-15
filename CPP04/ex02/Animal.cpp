#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal(std::string s_type) : type(s_type) {
    std::cout << "On a un nouvel arrivant chez NintenAnimalz" << std::endl;
}

Animal::Animal(Animal &cpy) {
    std::cout << "On a un échange d'animal chez NitenAnimalz" << std::endl;
    *this = cpy;
}

Animal::~Animal() {
    std::cout << "Une console DS oubliée à jamais... SHAME!" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
