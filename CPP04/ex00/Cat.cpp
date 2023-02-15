#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "MENOUUUUU!!!" << std::endl;
}

Cat::Cat(Cat &cpy) : Animal(cpy) {
    std::cout << "Un clone de MENOUUUU!" << std::endl;
    *this = cpy;
}

Cat::~Cat() {
    std::cout << "P'tit minou va s'ennuyer..." << std::endl;
}

void Cat::makeSound() const{
    std::cout << "On spin la roue et le chat fait... MEOW MEOW!" << std::endl;
}