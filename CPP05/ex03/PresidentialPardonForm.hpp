#include "Form.hpp"

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP


class PresidentialPardonForm : public Form {
public :
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &cpy);
    virtual ~PresidentialPardonForm();
    void        BeSigned(Bureaucrat* per);
    void        BeExecuted(const Bureaucrat* per) const;
    void        SenpaiPardon(std::string target) const;
private :
    std::string target;
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
