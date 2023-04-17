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

    std::cout << *meta;
    std::cout << *j;
    std::cout << *i;
    std::cout << "Maintenant pour les mauvais animaux" << std::endl;
    std::cout << *wmeta;
    std::cout << *wcat;
    delete meta;
    delete j;
    delete i;
    delete wmeta;
    delete wcat;
}
