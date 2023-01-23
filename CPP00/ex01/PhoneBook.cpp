#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _max_cont(8), index(0)
{
//	std::cout << "Constructeur créé" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
//	std::cout << "Destructeur appelé" << std::endl;
}

void	PhoneBook::add()
{
    std::string    info;

    std::cout << "Entrez votre prénom :" << std::endl;
    std::cin >> info;
    Contact[index].WName(info);
    std::cout << "Entrez votre nom de fammille  :" << std::endl;
    std::cin >> info;
    Contact[index].WLName(info);
    std::cout << "Entrez votre surnom ou gamertag :" << std::endl;
    std::cin >> info;
    Contact[index].WNickN(info);
    std::cout << "Entrez votre numéro de téléphone :" << std::endl;
    std::cin >> info;
    Contact[index].WPhone(info);
    std::cout << "Entrez votre secret le plus sombre :" << std::endl;
    std::cin >> info;
    Contact[index].WSecret(info);
    std::cout << "Contact ajouté avec succès!" << std::endl;
    Contact[index].index = index + 1;
    index++;
    if (index == _max_cont)
        index = 0;
}

void    PhoneBook::printbook()
{
    int i;

    i = 0;
    std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
    while (Contact[i]._getIndex() != 0 && i < 8)
    {
        std::cout << "|";
        std::cout.width(10);
        std::cout << Contact[i]._getIndex() << "|";
        std::cout.width(10);
        std::cout << Contact[i]._getFName(10) << "|";
        std::cout.width(10);
        std::cout << Contact[i]._getLName(10) << "|";
        std::cout.width(10);
        std::cout << Contact[i]._getNickname(10) << "|" << std::endl;
        i++;
    }
}

void	PhoneBook::search()
{
    std::string info;
    int         i;

    i = 0;
    if (Contact[0]._getIndex() == 0)
    {
        std::cout << "Il n'y a pas de contact dans le carnet" << std::endl;
        return ;
    }
    printbook();
    std::cout << "Quel contact voulez vous voir ?" << std::endl;
    while (i > _max_cont || i <= 0)
    {
        std::cin >> info;
        try
        {
            i = std::stoi(info);
        }
        catch (std::invalid_argument)
        {
            std::cout << "Veuillez fournir un numéro entre 1 et 8" << std::endl;
            i = 0;
        }
        if (i > _max_cont || i <= 0)
        {
            std::cout << "Veuillez fournir un numéro entre 1 et 8" << std::endl;
            i = 0;
        }
    }
    Contact[i - 1]._printinfo();
}
