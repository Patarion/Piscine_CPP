#include "Zombie.hpp"

int main (void)
{
    Zombie  Jack;
    Zombie  *Larry;
    Zombie  *Meute;

    Jack.init_name("Jack");
    Larry = newZombie("Larry");
    Meute = zombieHorde(10, "Thomas");
    randomChump("Bob");
    Jack.announce();
    Larry->announce();
    delete Larry;
    delete [] Meute;
    return (0);
}