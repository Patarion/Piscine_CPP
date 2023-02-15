#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arme) : name(name), equipped(arme) {

}

HumanA::~HumanA(){

}

void    HumanA::attack() {
    std::cout << name << " is attacking with " << equipped._getType() << std::endl;
}
