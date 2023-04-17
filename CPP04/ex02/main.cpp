#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main (void)
{
    const Animal* animalerie[4];
    const Animal bob;

    for (int count = 0; count < 4; count++)
    {
        if (count < 2)
            animalerie[count] = new Cat();
        else if (count >= 2)
            animalerie[count] = new Dog();
    }
    for (int count = 0; count < 4; count++)
    {
        if (count < 2)
            animalerie[count]->getBrain();
        else if (count >= 2)
            animalerie[count]->getBrain();
    }
    for (int count = 0; count < 4; count++)
    {
        delete animalerie[count];
    }
}
