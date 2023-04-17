/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:00:15 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:00:17 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_FORUM_HPP
#define CPP_FORUM_HPP

#include <iostream>
#include <fstream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public :
    Form(std::string name, int grade, int exec);
    Form(Form &cpy);
    virtual ~Form();
    bool        getSigne() const;
    void        setSigne(bool info);
    std::string getName() const;
    int         getGradeSigne() const;
    int         getGradeExec() const;
    void        beSigned(Bureaucrat* per);
    void virtual        execute(const Bureaucrat* per) const = 0;
    std::string virtual getTarget() const = 0;
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
