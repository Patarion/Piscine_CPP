#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    setName(name);
}

HumanB::~HumanB(){

}

void    HumanB::setName(std::string info){
    name = info;
}

void    HumanB::attack() {
    std::cout << name << " is attacking with " << equipped->_getType() << std::endl;
}

void	HumanB::setWeapon(Weapon arme)
{
	equipped = &arme;
}
