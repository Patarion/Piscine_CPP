#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {

    intel = new Brain();
    std::cout << "UN PETOUUUUU!!!!" << std::endl;
    intel->fullIdeas("OH MON DIEU! Trop de choses à f...ZZZZzzzzzzz");
}

Dog::Dog(Dog &cpy): Animal(cpy) {
    std::cout << "Un clone de PETOU!" << std::endl;
    *this = cpy;
}

Dog::~Dog() {
    delete intel;
    std::cout << "Mais reviens voir ton pitou..." << std::endl;
}

void Dog::makeSound() const{
    std::cout << "On spin la roue et le chien fait... WOOF WOOF!" << std::endl;
}

void Dog::getBrain() const
{
    intel->getIdeas();
}

Dog & Dog::operator=(Dog &cpy)
{
    this->type = cpy.getType();
    return *this;
}
