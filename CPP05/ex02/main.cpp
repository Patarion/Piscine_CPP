#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main (void)
{
    const Bureaucrat  *b0 = new Bureaucrat("Orton", 149);
    const Bureaucrat  *b1 = new Bureaucrat("Bob", 138);
    const Bureaucrat  *b2 = new Bureaucrat("Larry", 60);
    const Bureaucrat  *b3 = new Bureaucrat("George", 23);
    const Bureaucrat  *b4 = new Bureaucrat("Paul", 4);
    ShrubberyCreationForm   Shrub1("Jardin");
    RobotomyRequestForm     Robot1("Kyle");
    PresidentialPardonForm  Pardon1("Ygor");

    Shrub1.BeSigned((Bureaucrat*)b0);
    Shrub1.BeSigned((Bureaucrat*)b1);
    Shrub1.BeExecuted(b1);
    b2->ExecuteForm(Shrub1);
    Robot1.BeSigned((Bureaucrat*) b1);
    Robot1.BeSigned((Bureaucrat*) b2);
    b2->ExecuteForm(Robot1);
    Robot1.BeExecuted(b3);
    Pardon1.BeSigned((Bureaucrat *) b3);
    Pardon1.BeExecuted(b3);
    b4->ExecuteForm(Pardon1);

    delete b0;
    delete b1;
    delete b2;
    delete b3;
    delete b4;
}