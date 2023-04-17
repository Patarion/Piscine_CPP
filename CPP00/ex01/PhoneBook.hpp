#include <iostream>

#ifndef PHONEBOOK
# define PHONEBOOK

#include "Contact.hpp"

class PhoneBook
{
public :
		PhoneBook(void);
		~PhoneBook(void);
        void    search();
        void	add();
        void    printbook();
        void    exit();

private :
		const int	_max_cont;
        int         _index;
		Contact		_Contact[8];
};

#endif