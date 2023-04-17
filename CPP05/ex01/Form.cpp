/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:56:33 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 14:56:34 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name) : _name(name), _signe(false), _g_signe(50), _g_exec(25){
    try {
        if (_g_signe > 150 || _g_exec > 150)
            throw Form::GradeTooLowException();
    }
    catch (Form::GradeTooLowException)
    {
        GradeTooLowException().Low_Err();
    }
    try {
        if (_g_signe < 1 || _g_exec < 1)
            throw Form::GradeTooHighException();
    }
    catch (Form::GradeTooHighException)
    {
        GradeTooHighException().High_Err();
    }
    std::cout << "Impression du form en cours" << std::endl;
}
Form::Form(Form &cpy) : _name(cpy._name), _signe(cpy._signe), _g_signe(cpy._g_signe), _g_exec(cpy._g_exec) {
    std::cout << "Réception du fax en cours" << std::endl;
}
Form::~Form() {
    std::cout << "Destruction du formulaire en cours" << std::endl;
}

std::string Form::getName() const {
    return _name;
}

bool Form::getSigne() const {
    return _signe;
}

int Form::getGradeSigne() const {
    return _g_signe;
}
int Form::getGradeExec() const {
    return _g_exec;
}

void Form::setSigne(bool info) {
    _signe = info;
}

void Form::beSigned(Bureaucrat *per) {
    try
    {
        if (per->getGrade() > getGradeSigne())
            throw Form::GradeTooLowException();
    }
    catch (Form::GradeTooLowException)
    {
        std::cout << per->getName() << " couldn't sign " << getName() << " because " << GradeTooLowException().Low_Err();
        std::cout << std::endl;
    }
    try
    {
        if (per->getGrade() <= getGradeSigne())
            throw Form::GradeTooHighException();
    }
    catch (Form::GradeTooHighException)
    {
        std::cout << per->getName() << " can sign the form" << std::endl;
        setSigne(true);
    }
}

Form&       Form::operator=(Form &cpy)
{
    this->_signe = cpy.getSigne();
    return *this;
}

std::ostream & operator<<(std::ostream &out, Form &form)
{
    std::cout << "______________________________________" << std::endl;
    std::cout << "Nom du formulaire : " << form.getName() << std::endl;
    std::cout << "État du formulaire : " << form.getSigne() << std::endl;
    std::cout << "Grade pour le signer : " << form.getGradeSigne() << std::endl;
    std::cout << "Grade pour l'exécuter : " << form.getGradeExec() << std::endl;
    std::cout << "______________________________________" << std::endl;
    return out;
}
