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
        std::string	GetFName(int i) const;
        std::string	GetLName(int i) const;
        std::string	GetNickname(int i) const;
        std::string	GetPhone(void) const;
        std::string GetSecret(void) const;
        int         GetIndex(void) const;
        void        WName(std::string info);
        void        WLName(std::string info);
        void        WNickN(std::string info);
        void        WPhone(std::string info);
        void        WSecret(std::string info);
        void        PrintInfo() const;

	private :
	std::string		_FName;
	std::string		_LName;
	std::string     _Nickname;
	std::string		_Phone;
	std::string		_Secret;
};

#endif