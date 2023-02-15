#include "Form.hpp"

Form::Form(std::string name) : _name(name), _signe(false), _g_signe(50), _g_exec(25){
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
        std::cout << per->getName() << " can sign the form" << std::endl;
        setSigne(true);
    }
}