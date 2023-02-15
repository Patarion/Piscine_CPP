
#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP

#include
#include <iostream>
#include <exception>

class Bureaucrat {
public :
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat &cpy);
    ~Bureaucrat();
    void printInfo() const;
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
    std::string   name;
    int           grade;
};

std::ostream & operator<<(std::ostream &out, Bureaucrat printInfo());

#endif //CPP_BUREAUCRAT_HPP
