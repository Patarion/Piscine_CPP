#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void)
{
    const Animal* meta = new Animal("");
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wmeta = new WrongAnimal("Ygor");
    const WrongCat*    wcat = new WrongCat("Tigrou");

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << "Maintenant pour les mauvais animaux" << std::endl;
    std::cout << wmeta->getType() << std::endl;
    std::cout << wcat->getType() << std::endl;
    wmeta->makeSound();
    wcat->makeSound();
    delete meta;
    delete j;
    delete i;
    delete wmeta;
    delete wcat;
}
