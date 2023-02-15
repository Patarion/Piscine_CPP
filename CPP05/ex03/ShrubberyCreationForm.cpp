#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("Shrub", false, 145, 137), target(target) {
//    std::cout << "Every day I worry all day! About what's waiting in the bushes of love" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &cpy) :
    Form(cpy.GetName(), cpy.GetSigne(), cpy.GetGradeSigne(), cpy.GetGradeExec()){
    this->target = cpy.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
//    std::cout << "The chicken-duck-woman thing got me in the bushes of love." << std::endl;
//    std::cout << "I WAS SCREAMING SOMETHING AWFUL! AAAAAAAAAAAH!" << std::endl;
}

void ShrubberyCreationForm::BeSigned(Bureaucrat *per){
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
        std::cout << per->GetName() << " can sign the form " << GetName() << std::endl;
        SetIsSigne(true);
    }
}

void ShrubberyCreationForm::BeExecuted(Bureaucrat const *per) const {
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
        std::cout << per->GetName() << " can execute the form " << GetName() << std::endl;
        createBush(target);
    }
}

void ShrubberyCreationForm::createBush(std::string target) const{

    std::ofstream outfile((target + "_shrubbery").c_str());

    std::string shrubbery =
            "         *\n\
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

    outfile << shrubbery;
}
