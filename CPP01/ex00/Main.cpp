#include "Zombie.hpp"

int main (void)
{
    Zombie  Jack("Jack");
    Zombie  *Larry;

    Larry = newZombie("Larry");
    randomChump("Bob");
    Jack.announce();
    Larry->announce();
    delete Larry;
    return (0);
}