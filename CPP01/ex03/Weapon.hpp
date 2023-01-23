#include <iostream>

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

class Weapon{
public:
    Weapon(std::string name);
    ~Weapon();
    std::string _getType() const;
    void        setType(std::string info);
private :
    std::string type;
};

#endif //CPP_WEAPON_HPP
