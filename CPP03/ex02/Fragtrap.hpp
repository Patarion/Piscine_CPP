#include "Claptrap.hpp"

//
// Created by Jasmin Gagnon on 1/31/23.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

class Fragtrap : public Claptrap {
public:
    Fragtrap(std::string name);
    Fragtrap(Fragtrap &cpy);
    ~Fragtrap();
    void highFivesGuys(void);

};

std::ostream & operator<<(std::ostream &out, Fragtrap const &val);

#endif //CPP_FRAGTRAP_HPP
