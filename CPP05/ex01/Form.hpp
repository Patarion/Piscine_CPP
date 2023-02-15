//
// Created by Jasmin Gagnon on 2/6/23.
//

#ifndef CPP_FORUM_HPP
#define CPP_FORUM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
public :
    Form(std::string name);
    Form(Form &cpy);
    ~Form();
    bool        getSigne() const;
    void        setSigne(bool info);
    std::string getName() const;
    int         getGradeSigne() const;
    int         getGradeExec() const;
    void        beSigned(Bureaucrat* per);
    class GradeTooHighException : public std::exception {
    public :
        virtual const char* High_Err() const throw()
        {
            return ("Grade trop haut pour signer le formulaire");
        }
    };
    class GradeTooLowException : public std::exception {
    public :
        virtual const char* Low_Err() const throw()
        {
            return ("Grade trop bas pour signer le formulaire");
        }
    };

private :
    std::string const       _name;
    bool                    _signe;
    int const               _g_signe;
    int const               _g_exec;
};

#endif //CPP_FORUM_HPP
