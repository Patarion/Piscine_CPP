#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "UN PETOUUUUU!!!!" << std::endl;
}

Dog::Dog(Dog &cpy): Animal(cpy) {
    std::cout << "Un clone de PETOU!" << std::endl;
    *this = cpy;
}

Dog::~Dog() {
    std::cout << "Mais reviens voir ton pitou..." << std::endl;
}

void Dog::makeSound() const{
    std::cout << "On spin la roue et le chien fait... WOOF WOOF!" << std::endl;
}