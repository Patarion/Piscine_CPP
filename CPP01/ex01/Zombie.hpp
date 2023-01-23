
#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
    Zombie(void);
    ~Zombie(void);

    void    announce(void);
    void    init_name(std::string info);

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);


#endif
