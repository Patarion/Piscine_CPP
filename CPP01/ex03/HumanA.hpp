#include <iostream>
#include "Weapon.hpp"

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP

class HumanA{
public:
    HumanA(std::string name ,Weapon& arme);
    ~HumanA(void);
    void attack();

private :
    std::string name;
    Weapon&     equipped;
};

#endif //CPP_HUMANA_HPP
