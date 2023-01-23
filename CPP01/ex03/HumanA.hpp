#include <iostream>
#include "Weapon.hpp"

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP

class HumanA{
public:
    HumanA(std::string name ,Weapon& arme);
    ~HumanA(void);
    void attack();
    void setName(std::string info);
	void setWeapon(Weapon& arme);
private :
    Weapon&     equipped;
    std::string name;
};

#endif //CPP_HUMANA_HPP
