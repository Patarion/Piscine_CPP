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

void Animal::makeSound() const {
    std::cout << "Son d'animal random" << std::endl;
}

void    Animal::getIdeas() const{
    std::cout << "Rodrigue! 2 + 2 combien ça fait?... TROIS! Eh sheet..." << std::endl;
}