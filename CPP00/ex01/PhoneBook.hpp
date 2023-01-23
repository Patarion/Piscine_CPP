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

private :
		const int	_max_cont;
        int         index;
		Contact		Contact[8];
		void		exit();
};

#endif