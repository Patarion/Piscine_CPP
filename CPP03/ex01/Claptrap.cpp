#include "Claptrap.hpp"

Claptrap::Claptrap(std::string name, int HP, int E, int AD) : _name(name), _Hit_points(HP), _Energy(E), _attack_damage(AD) {
    std::cout << _name << " enters the Borderlands!" << std::endl;
}

Claptrap::Claptrap(Claptrap &cpy) {
    std::cout << cpy._name << " has cloned himself!" << std::endl;
    *this = cpy;
}
Claptrap::~Claptrap() {
    std::cout << "Nobody loves " << _name << " so we killed him!" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount) {
    _Hit_points -= amount;
//    std::cout << _name << "has now " << _Hit_points << " Hit points!" << std::endl;
    std::cout << "It's opponent has now " << _Hit_points << " Hit points!" << std::endl;
}

void Claptrap::attack(const std::string &target) {
    if (_Energy > 0)
    {
        _Energy -= 1;
        std::cout << target << " has been attacked by " << _name;
        std::cout << " for " << _attack_damage << " that must hurt!" << std::endl;
        takeDamage(_attack_damage);
    }
}

void Claptrap::beRepaired(unsigned int amount) {
    if (_Energy > 0)
    {
        _Hit_points += amount;
        _Energy -= 1;
        std::cout << _name << " has been repaired for " << amount;
        std::cout << " and has now " << _Hit_points << " Hit points!" << std::endl;
    }
}