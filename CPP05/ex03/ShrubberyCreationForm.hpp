/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:03:55 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:03:58 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public :
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &cpy);
    virtual ~ShrubberyCreationForm();
    void        BeSigned(Bureaucrat* per);
    void        execute(const Bureaucrat* per) const;
    void        createBush(std::string target) const;
    std::string getTarget() const;
    ShrubberyCreationForm & operator=(ShrubberyCreationForm &cpy);
private :
    std::string _target;
};

#endif //CPP_SHRUBBERYCREATIONFORM_HPP
