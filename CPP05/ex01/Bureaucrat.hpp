//
// Created by Jasmin Gagnon on 2/6/23.
//

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
public :
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat &cpy);
    ~Bureaucrat();
    std::string getName() const;
    int         getGrade() const;
    void        printInfo() const;
    void        signForm();
    class GradeTooHighException : public std::exception {
    public :
        virtual const char* High_Err() const throw()
        {
            return ("Grade trop haut pour être valide");
        }
    };
    class GradeTooLowException : public std::exception {
    public :
        virtual const char* Low_Err() const throw()
        {
            return ("Grade trop bas pour être valide");
        }
    };
protected :
    std::string     name;
    int             grade;
};

std::ostream & operator<<(std::ostream &out, Bureaucrat printInfo());

#endif //CPP_BUREAUCRAT_HPP
