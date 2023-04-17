/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:02:31 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:02:33 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern() {
    std::cout << "On vient d'engager un esclave... je veux dire interne" << std::endl;
}

Intern::Intern(Intern &cpy) {
    std::cout << "On a cloner le stagiaire" << std::cout;
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
    else
    {
        std::cout << "Le formulaire en paramètre n'est pas le bon" << std::endl;
    }
    return (r_form);
}
