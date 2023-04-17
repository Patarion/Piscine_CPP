/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:56:41 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 14:56:45 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_FORUM_HPP
#define CPP_FORUM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

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
    Form&       operator=(Form &cpy);
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

std::ostream & operator<<(std::ostream &out, Form &form);


#endif //CPP_FORUM_HPP
