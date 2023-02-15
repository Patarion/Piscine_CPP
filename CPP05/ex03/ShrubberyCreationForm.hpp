
#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public :
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &cpy);
    virtual ~ShrubberyCreationForm();
    void        BeSigned(Bureaucrat* per);
    void        BeExecuted(const Bureaucrat* per) const;
    void        createBush(std::string target) const;
private :
    std::string target;
};

#endif //CPP_SHRUBBERYCREATIONFORM_HPP
