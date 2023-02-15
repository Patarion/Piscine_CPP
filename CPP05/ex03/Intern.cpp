
#include "Intern.hpp"

Intern::Intern() {
    std::cout << "On vient d'engager un esclave... je veux dire interne" << std::endl;
}

Intern::Intern(Intern &cpy) {
    std::cout << "On a clonr le stagiaire" << std::cout;
    *this = cpy;
}

Intern::~Intern() {
    std::cout << "On vient de renvoyer l'interne par manque de fond" << std::endl;
}

Form *Intern::makeForm(std::string form, std::string target) const {

    Form *r_form;

    r_form = NULL;
    if (form.compare("Shrub") == 0)
    {
        r_form = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << form << std::endl;
    }
    else if (form.compare("Robot") == 0)
    {
        r_form = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << form << std::endl;
    }
    else if (form.compare("President") == 0)
    {
        r_form = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << form << std::endl;
    }

    return (r_form);
}