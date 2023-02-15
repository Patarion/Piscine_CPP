#include "Fragtrap.hpp"

Fragtrap::Fragtrap(std::string name) : Claptrap(name, 100, 100, 30) {
    std::cout << "L'explosion arrive sur ton écran drette là!" << std::endl;
    std::cout << "HERE COMES THE BOOM! HERE COMES THE BOOM!" << std::endl;
}

Fragtrap::Fragtrap(Fragtrap &cpy) : Claptrap(cpy) {
    std::cout << "Ouin ben on vient de faire appel à Mr. Bay pour plus d'explosion!" << std::endl;
    *this = cpy;
}

Fragtrap::~Fragtrap() {
    std::cout << "L'explosion fut si grosse que ça vira en pet sauce!" << std::endl;
}

void Fragtrap::highFivesGuys(void) {
    std::cout << "Il est temps d'un High Five EXPLOSIF!" << std::endl;
    std::cout << "KABOOOOUUUUUMMMMM!!!!!" << std::endl;
}