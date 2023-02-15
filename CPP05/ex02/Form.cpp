#include "Form.hpp"

Form::Form(std::string name, bool signe, int sig_r, int exec_r) :
    _name(name), _signe(signe), _g_signe(sig_r), _g_exec(exec_r){
//    std::cout << "Impression du form en cours" << std::endl;
}
Form::Form(Form &cpy) :
    _name(cpy.GetName()), _signe(cpy.GetSigne()), _g_signe(cpy.GetGradeSigne()), _g_exec(cpy.GetGradeExec()) {
//    std::cout << "Réception du fax en cours" << std::endl;
}
Form::~Form() {
//    std::cout << "Destruction du formulaire en cours" << std::endl;
}

std::string Form::GetName() const {
    return _name;
}

bool Form::GetSigne() const {
    return _signe;
}

int Form::GetGradeSigne() const {
    return _g_signe;
}
int Form::GetGradeExec() const {
    return _g_exec;
}

void Form::SetIsSigne(bool info) {
    _signe = info;
}

void Form::Execute(const Bureaucrat &executor) const {
    if (GetName().compare("Shrub") == 0)
    {
        try {
            if (GetSigne() != true && GetGradeExec() > executor.GetGrade())
                throw Form::GradeTooLowException();
        }
        catch (GradeTooLowException) {
            std::cout << GradeTooLowException().Low_Err() << std::endl;
            return ;
        }
        this->BeExecuted(&executor);
    }
    else if (GetName().compare("Robot") == 0)
    {
        try {
            if (GetSigne() != true && GetGradeExec() > executor.GetGrade())
                throw Form::GradeTooLowException();
        }
        catch (GradeTooLowException) {
            std::cout << GradeTooLowException().Low_Err() << std::endl;
            return ;
        }
        this->BeExecuted(&executor);
    }
    else if (GetName().compare("President") == 0)
    {
        try {
            if (GetSigne() != true && GetGradeExec() > executor.GetGrade())
                throw Form::GradeTooLowException();
        }
        catch (GradeTooLowException) {
            std::cout << GradeTooLowException().Low_Err() << std::endl;
            return ;
        }
        this->BeExecuted(&executor);
    }
}