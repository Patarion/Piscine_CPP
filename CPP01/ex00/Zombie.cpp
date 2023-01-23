#include "Zombie.hpp"

Zombie::Zombie(std::string info){
    name = info;
}

Zombie::~Zombie(void){
    std::cout << this->name << " a été tué" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
    Zombie* newZombie = new Zombie(name);
    return newZombie;
}

void randomChump(std::string name){
    Zombie Bob(name);

    Bob.announce();
}