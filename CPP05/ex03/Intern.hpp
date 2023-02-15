//
// Created by Jasmin Gagnon on 2/9/23.
//

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public :
    Intern();
    Intern(Intern &cpy);
    virtual ~Intern();
    Form *makeForm(std::string form, std::string target) const;
};

#endif //CPP_INTERN_HPP
