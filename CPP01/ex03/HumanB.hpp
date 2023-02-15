#include <iostream>
#include "Weapon.hpp"

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

class HumanB{
public :
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void	setWeapon(Weapon arme);

private :
    Weapon*     equipped;
    std::string name;
};

#endif //CPP_HUMANB_HPP
