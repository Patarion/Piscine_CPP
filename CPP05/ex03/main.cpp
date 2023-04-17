/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:06:37 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:06:39 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main (void)
{
    const Bureaucrat    *b0 = new Bureaucrat("Orton", 149);
    const Bureaucrat    *b1 = new Bureaucrat("Bob", 138);
    const Bureaucrat    *b2 = new Bureaucrat("Larry", 60);
    const Bureaucrat    *b3 = new Bureaucrat("George", 23);
    const Bureaucrat    *b4 = new Bureaucrat("Paul", 4);
    const Intern        *i1 = new Intern();
    Form *ShrubForm;
    Form *RobotForm;
    Form *PresidentForm;
    Form *RandomForm;

    ShrubForm = i1->makeForm("Shrub", "Parc");
    RobotForm = i1->makeForm("Robot", "Kyle");
    PresidentForm = i1->makeForm("President", "Ygor");
    RandomForm = i1->makeForm("Random", "You");

    ShrubForm->beSigned((Bureaucrat*)b0);
    ShrubForm->beSigned((Bureaucrat*)b1);
    ShrubForm->execute(b1);
    b2->ExecuteForm(*ShrubForm);
    RobotForm->beSigned((Bureaucrat*) b1);
    RobotForm->beSigned((Bureaucrat*) b2);
    b2->ExecuteForm(*RobotForm);
    RobotForm->execute(b3);
    PresidentForm->beSigned((Bureaucrat *) b3);
    PresidentForm->execute(b3);
    b4->ExecuteForm(*PresidentForm);
    delete b0;
    delete b1;
    delete b2;
    delete b3;
    delete b4;
    delete ShrubForm;
    delete RobotForm;
    delete PresidentForm;
    delete i1;
}
