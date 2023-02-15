#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"

int main (void)
{
    Claptrap cp1("Bob", 10, 10, 0);
    Scavtrap scp1("Larry");
    Fragtrap fcp1("Statham");

    cp1.attack("George");
    cp1.beRepaired(1);
    scp1.attack("George");
    scp1.beRepaired(5);
    scp1.guardGate();
    fcp1.attack("George");
    fcp1.highFivesGuys();
}