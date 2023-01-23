#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main (void)
{
	std::string     cmd;
	PhoneBook PhoneBook;

	while (cmd.compare("EXIT") != 0)
	{
        std::cout << "Bienvenue sur votre PhoneBook veuillez rentrer l'une des" << std::endl;
        std::cout << "commandes suivantes : ADD, SEARCH, EXIT" << std::endl;
        std::cout << "Que voulez vous faire ?" << std::endl;
        std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			PhoneBook.add();
		else if (cmd.compare("SEARCH") == 0)
			PhoneBook.search();
        std::cout << std::endl;
	}
    return (0);
}