/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:55:45 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 14:55:46 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
    int getGrade() const;
    void DownGrade();
    void UpGrade();
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

    Bureaucrat &operator=(Bureaucrat &cpy);
protected :
    std::string const   _name;
    int                 _grade;
};

std::ostream & operator<<(std::ostream &out, Bureaucrat &bur);

#endif //CPP_BUREAUCRAT_HPP
