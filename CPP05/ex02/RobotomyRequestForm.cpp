
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form("Form", false, 72, 45), target(target) {
//    std::cout << "Le docteur sera à vous sous peu. C'est pour une robotomy bien sûr?" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &cpy) :
    Form(cpy.GetName(), cpy.GetSigne(), cpy.GetGradeSigne(), cpy.GetGradeExec()), target(cpy.target) {
//    std::cout << "Le docteur c'est cloné pour être 2 fois plus efficace" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
//    std::cout << "Le docteur vient de quitté l'hôpital" << std::endl;
}

void RobotomyRequestForm::Robotomy(std::string target) const{

    srand(time(0));
    if ((rand() % 2) == 0)
        std::cout << "L'opération sur " << target << " a été un succès!" << std::endl;
    else
        std::cout << "L'opération sur " << target << " a échoué" << std::endl;
}

void RobotomyRequestForm::BeSigned(Bureaucrat *per){
    try
    {
        if (per->GetGrade() > GetGradeSigne())
            throw Form::GradeTooLowException();
    }
    catch (GradeTooLowException)
    {
        std::cout << per->GetName() << " couldn't sign " << GetName() << " because " << GradeTooLowException().Low_Err();
        std::cout << std::endl;
    }
    try
    {
        if (per->GetGrade() <= GetGradeSigne())
            throw Form::GradeTooHighException();
    }
    catch (GradeTooHighException)
    {
        std::cout << per->GetName() << " can sign the form" << std::endl;
        SetIsSigne(true);
    }
}

void RobotomyRequestForm::BeExecuted(Bureaucrat const *per) const {
    if (GetSigne() == false)
        return ;
    try
    {
        if (per->GetGrade() > GetGradeExec())
            throw Form::GradeTooLowException();
    }
    catch (GradeTooLowException)
    {
        std::cout << per->GetName() << " couldn't execute " << GetName() << " because " << GradeTooLowException().Low_Err();
        std::cout << std::endl;
    }
    try
    {
        if (per->GetGrade() <= GetGradeExec())
            throw Form::GradeTooHighException();
    }
    catch (GradeTooHighException)
    {
        std::cout << per->GetName() << " can execute the form" << std::endl;
        Robotomy(target);
    }
}