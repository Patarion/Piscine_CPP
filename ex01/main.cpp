#include "RPN.hpp"

int main (int argc, char **argv)
{
    std::stack<int> equa;
    int             i;
    int             term;

    term = 0;;
    if (argc != 2)
    {
        std::cout << "Veuillez fournir une formule de format RPN (Reverse Polish Notation)" << std::endl;
        return (EXIT_FAILURE);
    }
    i = 0;
    while (argv[1][i] != '\0')
    {
        if (isdigit(argv[1][i]) != 0 && (argv[1][i + 1] == 0x20 || argv[1][i + 1] == '\0'))
        {
            equa.push(argv[1][i] - 0x30);
            if (argv[1][i + 1] == 0x20)
                i += 2;
            else
                i++;
        }
        else if ((argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' || argv[1][i] == '/')\
            && (argv[1][i + 1] == 0x20 || argv[1][i + 1] == '\0') && equa.size() == 2)
        {
            term = equa.top();
            equa.pop();
            if (argv[1][i] == '+')
                term = equa.top() + term;
            else if (argv[1][i] == '-')
                term = equa.top() - term;
            else if (argv[1][i] == '*')
                term = equa.top() * term;
            else if (argv[1][i] == '/')
                term = equa.top() / term;
            equa.pop();
            equa.push(term);
            if (argv[1][i + 1] == 0x20)
                i += 2;
            else
                i++;
        }
        else
        {
            std::cout << "Une erreur est dans votre formule. L'allemagne va envahir la Pologne maudit!" << std::endl;
            return (EXIT_FAILURE);
        }
    }
    if (equa.size() > 1)
    {
        std::cout << "Une erreur est dans votre formule. L'allemagne va envahir la Pologne maudit!" << std::endl;
        return (EXIT_FAILURE);
    }
    std::cout << equa.top() << std::endl;
    equa.pop();
}