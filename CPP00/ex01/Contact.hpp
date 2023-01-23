#include <iostream>

#ifndef CONTACT
# define CONTACT

class PhoneBook;

class Contact
{
	public :
        Contact(void);
        ~Contact(void);
        int         index;
        std::string	_getFName(int i) const;
        std::string	_getLName(int i) const;
        std::string	_getNickname(int i) const;
        std::string	_getPhone(void) const;
        std::string _getSecret(void) const;
        int         _getIndex(void) const;
        void        WName(std::string info);
        void        WLName(std::string info);
        void        WNickN(std::string info);
        void        WPhone(std::string info);
        void        WSecret(std::string info);
        void        _printinfo() const;

	private :
	std::string		FName;
	std::string		LName;
	std::string     Nickname;
	std::string		Phone;
	std::string		Secret;
};

#endif