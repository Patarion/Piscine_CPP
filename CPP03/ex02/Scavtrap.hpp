
#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "Claptrap.hpp"

class Scavtrap : public Claptrap{
public :
    Scavtrap(std::string name);
    Scavtrap(Scavtrap &cpy);
    ~Scavtrap();
    void    attack(const std::string &target);
    void    guardGate();

private :

};

std::ostream & operator<<(std::ostream &out, Scavtrap const &val);

#endif //CPP_SCAVTRAP_HPP
