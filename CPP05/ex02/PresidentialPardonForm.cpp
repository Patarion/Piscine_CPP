//
// Created by Jasmin Gagnon on 2/8/23.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("President", false, 25, 5), target(target) {
//    std::cout << "Prepare for the pardon of our SENPAI! Let's hope he notices you." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cpy) :
    Form(cpy.GetName(), cpy.GetSigne(), cpy.GetGradeSigne(), cpy.GetGradeExec()){
//    std::cout << "We just cloned Senpai because we need more handsomness" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
//    std::cout << "You just killed senpai... YOU MONSTER! *SPLAP*" << std::endl;
}

void PresidentialPardonForm::BeSigned(Bureaucrat *per) {
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

void PresidentialPardonForm::BeExecuted(Bureaucrat const *per) const {
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
        SenpaiPardon(target);
    }
}

void PresidentialPardonForm::SenpaiPardon(std::string target) const {
    std::cout << target << " has been forgiven by Senpai. HE'S BEEN NOTICED!" << std::endl;
}