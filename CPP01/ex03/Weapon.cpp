#include "Weapon.hpp"

Weapon::Weapon(std::string name){
    setType(name);
}

Weapon::~Weapon(){

}

void Weapon::setType(std::string name){
    type = name;
}

std::string Weapon::_getType() const {
    return type;
}