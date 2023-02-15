#include "Zombie.hpp

Zombie* zombieHorde(int N, std::string name){
    int i;

    Zombie* Horde = new Zombie[N];
    for (i = 0; i < N; i++) {
        Horde[i].init_name(name);
        Horde[i].announce();
    }
    return Horde;
}