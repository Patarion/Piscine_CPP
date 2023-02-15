#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main (void)
{
    const Bureaucrat    *b0 = new Bureaucrat("Orton", 149);
    const Bureaucrat    *b1 = new Bureaucrat("Bob", 138);
    const Bureaucrat    *b2 = new Bureaucrat("Larry", 60);
    const Bureaucrat    *b3 = new Bureaucrat("George", 23);
    const Bureaucrat    *b4 = new Bureaucrat("Paul", 4);
    const Intern        *i1 = new Intern();
//    ShrubberyCreationForm   Shrub1("Jardin");
//    RobotomyRequestForm     Robot1("Kyle");
//    PresidentialPardonForm  Pardon1("Ygor");
    Form *ShrubForm;
    Form *RobotForm;
    Form *PresidentForm;

    ShrubForm = i1->makeForm("Shrub", "Parc");
    RobotForm = i1->makeForm("Robot", "Kyle");
    PresidentForm = i1->makeForm("President", "Ygor");

    ShrubForm->BeSigned((Bureaucrat*)b0);
    ShrubForm->BeSigned((Bureaucrat*)b1);
    ShrubForm->BeExecuted(b1);
    b2->ExecuteForm(*ShrubForm);
    RobotForm->BeSigned((Bureaucrat*) b1);
    RobotForm->BeSigned((Bureaucrat*) b2);
    b2->ExecuteForm(*RobotForm);
    RobotForm->BeExecuted(b3);
    PresidentForm->BeSigned((Bureaucrat *) b3);
    PresidentForm->BeExecuted(b3);
    b4->ExecuteForm(*PresidentForm);

    delete b0;
    delete b1;
    delete b2;
    delete b3;
    delete b4;
}