

#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
public :
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &cpy);
    virtual     ~RobotomyRequestForm();
    void        Robotomy(std::string target) const;
    void        BeSigned(Bureaucrat* per);
    void        BeExecuted(const Bureaucrat* per) const;
private :
    std::string target;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
