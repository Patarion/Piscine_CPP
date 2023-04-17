/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:00:53 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:00:54 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form("Robotomy", 72, 45), _target(target) {
    this->setSigne(false);
    std::cout << "Le docteur sera à vous sous peu. C'est pour une robotomy bien sûr?" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &cpy) :
    Form(cpy.getName(), cpy.getGradeSigne(), cpy.getGradeExec()), _target(cpy.getTarget()) {
    *this = cpy;
//    std::cout << "Le docteur c'est cloné pour être 2 fois plus efficace" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Le docteur vient de quitté l'hôpital" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const{
    return (_target);
}

void RobotomyRequestForm::Robotomy() const{

    srand(time(0));
    if ((rand() % 2) == 0)
        std::cout << "L'opération sur " << _target << " a été un succès!" << std::endl;
    else
        std::cout << "L'opération sur " << _target << " a échoué" << std::endl;
}

void RobotomyRequestForm::BeSigned(Bureaucrat *per){
    try
    {
        if (per->getGrade() > getGradeSigne())
            throw Form::GradeTooLowException();
    }
    catch (GradeTooLowException)
    {
        std::cout << per->getName() << " couldn't sign " << getName() << " because " << GradeTooLowException().Low_Err();
        std::cout << std::endl;
    }
    try
    {
        if (per->getGrade() <= getGradeSigne())
            throw Form::GradeTooHighException();
    }
    catch (GradeTooHighException)
    {
        std::cout << per->getName() << " can sign the form " << getName() << std::endl;
        setSigne(true);
    }
}

void RobotomyRequestForm::execute(Bureaucrat const *per) const {
    if (getSigne() == false)
        return ;
    try
    {
        if (per->getGrade() > getGradeExec())
            throw Form::GradeTooLowException();
    }
    catch (GradeTooLowException)
    {
        std::cout << per->getName() << " couldn't execute " << getName() << " because " << GradeTooLowException().Low_Err();
        std::cout << std::endl;
    }
    try
    {
        if (per->getGrade() <= getGradeExec())
            throw Form::GradeTooHighException();
    }
    catch (GradeTooHighException)
    {
        std::cout << per->getName() << " can execute " << getName() << std::endl;
        Robotomy();
    }
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm &cpy)
{
    this->setSigne(cpy.getSigne());
    this->_target = cpy.getTarget();
    return *this;
}
