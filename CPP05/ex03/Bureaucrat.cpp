/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:01:49 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:01:50 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

    std::cout << "Bievenue " << name << " dans la bureacratie. Voici votre laisser-passer A38. Bonne chance!";
    std::cout << std::endl;
    try {
        if (_grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (GradeTooLowException)
    {
        std::cout << GradeTooLowException().Low_Err() << std::endl;
    }
    try {
        if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (GradeTooHighException)
    {
        std::cout << GradeTooHighException().High_Err() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) {
    std::cout << "Cloner ne règlerera pas tes problèmes" << std::cout;
    *this = cpy;
}

Bureaucrat::~Bureaucrat() {
    std::cout << _name << " vient de quitter le système ou est devenu fou à cause de tous les laisser-passers.";
    std::cout << std::endl;
}

std::string Bureaucrat::getName() const{
    return (_name);
}

int Bureaucrat::getGrade() const{
    return (_grade);
}

void Bureaucrat::UpGrade(){
    _grade -= 1;
    try {
        if (_grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (GradeTooLowException)
    {
        std::cout << GradeTooLowException().Low_Err() << std::endl;
    }
    try {
        if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (GradeTooHighException)
    {
        std::cout << GradeTooHighException().High_Err() << std::endl;
    }
}

void Bureaucrat::DownGrade(){
    _grade += 1;
    try {
        if (_grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException)
    {
        std::cout << GradeTooLowException().Low_Err() << std::endl;
    }
    try {
        if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (Bureaucrat::GradeTooHighException)
    {
        std::cout << GradeTooHighException().High_Err() << std::endl;
    }
}

void Bureaucrat::signForm(Form &doc){
    try
    {
        if (getGrade() > doc.getGradeSigne())
            throw Form::GradeTooLowException();
    }
    catch (Form::GradeTooLowException)
    {
        std::cout << getName() << " couldn't sign " << doc.getName() << " because " << GradeTooLowException().Low_Err();
        std::cout << std::endl;
    }
    try
    {
        if (getGrade() <= doc.getGradeSigne())
            throw Form::GradeTooHighException();
    }
    catch (Form::GradeTooHighException)
    {
        std::cout << getName() << " can sign the form" << std::endl;
        doc.setSigne(true);
    }
}

void Bureaucrat::ExecuteForm(Form const &form) const{
    form.execute(this);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &cpy){
    this->_grade = cpy.getGrade();
    return *this;
}

std::ostream & operator<<(std::ostream &out, Bureaucrat &bur){
    std::cout << bur.getName() << " a le grade suivant " << bur.getGrade();
    return out;
}
