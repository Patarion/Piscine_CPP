#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN *equation = new RPN();
    int i;

    i = 0;
    if (argc != 2)
    {
        std::cout << "Veuillez fournir une équation RPN!" << std::endl;
        return (EXIT_FAILURE);
    }
    while (argv[1][i] != '\0')
    {
        if (isdigit(argv[1][i]) == 0 && argv[1][i + 1] == 0x20)
            equation->addTerm(argv[1][i]);
        else if ((argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' ||
            argv[1][i] == '/') && argv[1][i] == 0x20 && equation->tab->size() == 2)
            equation->calculate(argv[1][i]);
        else
            break ;
        i += 2;
    }
    if (argv[1][i] != '\0')
        std::cout << "La formule fournise n'est pas valide ou a une erreur de format" << std::endl;
    delete equation;
}