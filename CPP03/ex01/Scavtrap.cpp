#include "Scavtrap.hpp"

Scavtrap::Scavtrap(std::string name) : Claptrap(name, 100, 50, 20) {
    std::cout << "Claptrap 2.0 créé! L'update n'enlève pas qu'il est tannant..." << std::endl;
}

Scavtrap::Scavtrap(Scavtrap &cpy) : Claptrap(cpy) {
    std::cout << "Pourquoi on copie un Scavtrap?!" << std::endl;
    *this = cpy;
}

Scavtrap::~Scavtrap() {
    std::cout << "Scavtrap a succumbé aux escaliers ou d'une balle perdue. J'vois pas de différence!" << std::endl;
}

void    Scavtrap::attack(const std::string &target){
    std::cout << "Scavtrap a donné une taloche de " << _attack_damage << " dégâts à " << target;
    std::cout << "ça doit avoir fait mal" << std::endl;
    _Energy -= 1;
//    target.takeDamage(_attack_damage);
}

void    Scavtrap::guardGate(){
    std::cout << "Scavtrap se met en mode tortue (Gate Keeper)! Il subira aucun dégàt pour 1 tour." << std::endl;
    _Energy -= 3;
}