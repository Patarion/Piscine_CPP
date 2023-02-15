//
// Created by Jasmin Gagnon on 1/24/23.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>

class Claptrap {
public :
    Claptrap(std::string name);
    Claptrap(Claptrap &cpy);
    ~Claptrap();
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

private :
    std::string     _name;
    int             _Hit_points;
    int             _Energy;
    int             _attack_damage;
};

std::ostream & operator<<(std::ostream &out, Claptrap const &val);

#endif //CPP_CLAPTRAP_HPP
