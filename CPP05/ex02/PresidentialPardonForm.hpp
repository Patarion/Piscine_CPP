/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:00:35 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:00:37 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP


class PresidentialPardonForm : public Form {
public :
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &cpy);
    virtual ~PresidentialPardonForm();
    void        BeSigned(Bureaucrat* per);
    void        execute(const Bureaucrat* per) const;
    void        SenpaiPardon(std::string target) const;
    std::string getTarget() const;

    PresidentialPardonForm & operator=(PresidentialPardonForm &cpy);
private :
    std::string _target;
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
