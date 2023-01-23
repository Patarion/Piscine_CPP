#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arme) : equipped(arme) {
    setName(name);
}

HumanA::~HumanA(){

}

void    HumanA::setName(std::string info){
    name = info;
}

void    HumanA::attack() {
    std::cout << name << " is attacking with " << equipped._getType() << std::endl;
}

void HumanA::setWeapon(Weapon& arme)
{
	equipped = arme;
}