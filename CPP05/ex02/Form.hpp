//
// Created by Jasmin Gagnon on 2/6/23.
//

#ifndef CPP_FORUM_HPP
#define CPP_FORUM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public :
    Form(std::string name, bool signature, int sig_r, int exec_r);
    Form(Form &cpy);
    virtual ~Form();
    void                SetExec(int info);
    void                SetSignature(int info);
    void                SetIsSigne(bool info);
    bool                GetSigne() const;
    std::string         GetName() const;
    int                 GetGradeSigne() const;
    int                 GetGradeExec() const;
    void virtual        BeSigned(Bureaucrat* per) = 0;
    void virtual        BeExecuted(const Bureaucrat* per) const = 0;
    void                Execute(Bureaucrat const & executor) const;
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
