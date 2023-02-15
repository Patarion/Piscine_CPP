#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    Bureaucrat  b1("Bob", 160);
    Bureaucrat  b2("Larry", 25);
    Bureaucrat  b3("George", 51);
    Form        contrat1("B1 : A-38");
    Form        contrat2("B2 : A-38");
    Form        contrat3("B3 : A-38");

    contrat1.beSigned(&b1);
    contrat2.beSigned(&b2);
    contrat3.beSigned(&b3);
    contrat1.getSigne();
    contrat2.getSigne();
    contrat3.getSigne();
}