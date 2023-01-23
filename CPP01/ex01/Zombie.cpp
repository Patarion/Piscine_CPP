#include "Zombie.hpp"

Zombie::Zombie(void){

}

Zombie::~Zombie(void){
    std::cout << this->name << " a été tué" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
    Zombie* newZombie = new Zombie;

    newZombie->init_name(name);
    return newZombie;
}

void randomChump(std::string name){
    Zombie Bob;

    Bob.init_name(name);
    Bob.announce();
}

void Zombie::init_name(std::string info){
    name = info;
}

Zombie* zombieHorde(int N, std::string name){
    int i;

    Zombie* Horde = new Zombie[N];
    for (i = 0; i < N; i++) {
        Horde[i].init_name(name);
        Horde[i].announce();
    }
    return Horde;
}