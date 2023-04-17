/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:01:12 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:01:13 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("Shrub", 145, 137), _target(target) {
    this->setSigne(false);
    std::cout << "Every day I worry all day! About what's waiting in the bushes of love" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &cpy) :
    Form(cpy.getName(), cpy.getGradeSigne(), cpy.getGradeExec()){
    *this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "The chicken-duck-woman thing got me in the bushes of love." << std::endl;
    std::cout << "I WAS SCREAMING SOMETHING AWFUL! AAAAAAAAAAAH!" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const{
    return (_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &cpy)
{
    this->setSigne(cpy.getSigne());
    this->_target = cpy.getTarget();
    return *this;
}

void ShrubberyCreationForm::BeSigned(Bureaucrat *per){
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

void ShrubberyCreationForm::execute(Bureaucrat const *per) const {
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
        createBush(_target);
    }
}

void ShrubberyCreationForm::createBush(std::string target) const{

    std::ofstream outfile((target + "_shrubbery").c_str());
    std::string shrubbery ="         *\n\
        /|\\\n\
       /*|O\\\n\
      /*/|\\*\\\n\
     /X/O|*\\X\\\n\
    /*/X/|\\X\\*\\\n\
   /O/*/X|*\\O\\X\\\n\
  /*/O/X/|\\X\\O\\*\\\n\
 /X/O/*/X|O\\X\\*\\O\\\n\
/O/X/*/O/|\\X\\*\\O\\X\\\n\
        |X|\n\
        |X|\n";
    if (outfile.is_open())
        outfile << shrubbery;
    outfile.close();
}
