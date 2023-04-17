/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:03:33 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:03:36 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
public :
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &cpy);
    virtual     ~RobotomyRequestForm();
    void        Robotomy() const;
    void        BeSigned(Bureaucrat* per);
    void        execute(const Bureaucrat* per) const;
    std::string getTarget() const;

    RobotomyRequestForm & operator=(RobotomyRequestForm &cpy);
private :
    std::string _target;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
