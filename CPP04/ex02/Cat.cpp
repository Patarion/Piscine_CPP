#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat") {

    intel = new Brain();
    std::cout << "MENOUUUUU!!!" << std::endl;
    intel->fullIdeas("Dominer le monde. J'veux dire... MEOW!");
}

Cat::Cat(Cat &cpy) : Animal(cpy) {
    std::cout << "Un clone de MENOUUUU!" << std::endl;
    *this = cpy;
}

Cat::~Cat() {
    delete intel;
    std::cout << "P'tit minou va s'ennuyer..." << std::endl;
}

void Cat::makeSound() const{
    std::cout << "On spin la roue et le chat fait... MEOW MEOW!" << std::endl;
}

Cat & Cat::operator=(Cat &cpy)
{
    this->type = cpy.getType();
    return *this;
}

void Cat::getBrain() const
{
    intel->getIdeas();
}