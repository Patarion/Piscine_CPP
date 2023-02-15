#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {

//    std::cout << "Bievenue " << name << " dans la bureacratie. Voici votre laisser-passer A38. Bonne chance!";
//    std::cout << std::endl;
    try {
        if (grade > 150)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (GradeTooHighException)
    {
        std::cout << GradeTooHighException().High_Err() << std::endl;
    }
    try {
        if (grade < 1)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (GradeTooLowException)
    {
        std::cout << GradeTooLowException().Low_Err() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) {
//    std::cout << "Cloner ne règlerera pas tes problèmes" << std::cout;
    *this = cpy;
}

Bureaucrat::~Bureaucrat() {
//    std::cout << name << " vient de quitter le système ou est devenu fou à cause de tous les laisser-passers.";
//    std::cout << std::endl;
}

std::string Bureaucrat::GetName() const {
    return name;
}

int Bureaucrat::GetGrade() const {
    return grade;
}

void Bureaucrat::PrintInfo() const {
    std::cout << GetName() << " bureaucrat grade " << GetGrade();
}

void Bureaucrat::SignForm() {

}

void Bureaucrat::ExecuteForm(Form const &form) const{
    form.BeExecuted(this);
}