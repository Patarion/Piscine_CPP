#include "Harl.hpp"

Harl::Harl() {

    _levels[0] = "DEBUG";
    _levels[1] = "INFO";
    _levels[2] = "WARNING";
    _levels[3] = "ERROR";

    _actions[0] = &Harl::_debug;
    _actions[1] = &Harl::_info;
    _actions[2] = &Harl::_warning;
    _actions[3] = &Harl::_error;
}

Harl::~Harl() {

}

void Harl::_debug(void) const{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << "burger. I really do !" << std::endl;
}

void Harl::_error(void) const{
    std::cout <<  "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::_info(void) const{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::_warning(void) const{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming ";
    std::cout << "for years whereas you started working here since last month." << std::endl;
}

void Harl::complain(std::string level) {
    int i;

    for (i = 0 ; i < 4 ; i++)
    {
        if (level == _levels[i])
        {
            (this->*_actions[i])();
            return ;
        }
    }
    std::cout << "Bob Hartley est pas content! Shit le v'là..." << std::endl;
    std::cout << "Passe ta tête dans un scanner d'épicerie! J'pense t'as un jambon entre les 2 oreilles!" << std::endl;
}