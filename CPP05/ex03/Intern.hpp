/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:02:47 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:02:48 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public :
    Intern();
    Intern(Intern &cpy);
    virtual ~Intern();
    Form *makeForm(std::string form, std::string target) const;
};

#endif //CPP_INTERN_HPP
