#include "Claptrap.hpp"

int main (void)
{
    Claptrap cp1("Bob");
    Claptrap cp2(cp1);

    cp1.attack("George");
    cp1.beRepaired(1);
}