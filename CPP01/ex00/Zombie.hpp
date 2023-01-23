
#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
    Zombie(std::string info);
    ~Zombie(void);

    void    announce(void);

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
