#include "Harl.hpp"


int main (void)
{
    Harl        chialeux;
    std::string info;

    std::cout << "C'EST L'TEMPS DE CHIALER!" << std::endl;
    std::cout << "À quel degré de chialage êtes vous? (INFO, WARNING, DEBUG, ERROR)" << std::endl;
    std::cin >> info;
    chialeux.complain(info);
    std::cout << "Bon asteur Hartley en a sur le coeur..." << std::endl;
    chialeux.complain("DEBUG");
    chialeux.complain("INFO");
    chialeux.complain("WARNING");
    chialeux.complain("ERROR");
    return 0;
}
