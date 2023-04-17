/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:03:03 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:03:04 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("President", 25, 5), _target(target){
    setSigne(false);
    std::cout << "Prepare for the pardon of our SENPAI! Let's hope he notices you." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cpy) :
    Form(cpy.getName(), cpy.getGradeSigne(), cpy.getGradeExec()){
    *this = cpy;
//    std::cout << "We just cloned Senpai because we need more handsomness" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "You just killed senpai... YOU MONSTER! *SPLAP*" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const{
    return (_target);
}

void PresidentialPardonForm::BeSigned(Bureaucrat *per) {
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

void PresidentialPardonForm::execute(Bureaucrat const *per) const {
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
        SenpaiPardon(_target);
    }
}

void PresidentialPardonForm::SenpaiPardon(std::string target) const {
    std::cout << target << " has been forgiven by Senpai. HE'S BEEN NOTICED!" << std::endl;
}

PresidentialPardonForm &  PresidentialPardonForm::operator=(PresidentialPardonForm &cpy)
{
    this->setSigne(cpy.getSigne());
    this->_target = cpy.getTarget();
    return *this;
}
