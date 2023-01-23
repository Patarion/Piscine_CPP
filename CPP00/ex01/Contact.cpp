#include "Contact.hpp"

Contact::Contact(void)
{
    index = 0;
//	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
//	std::cout << "Destructor called" << std::endl;
}

std::string Contact::_getFName(int size) const
{
    if (size == 10 && FName.size() >= 11)
        return FName.substr(0, 9) + ".";
    else
	    return FName;
}

std::string	Contact::_getLName(int size) const
{
    if (size == 10 && LName.size() >= 11)
        return LName.substr(0, 9) + ".";
    else
        return LName;
}

std::string	Contact::_getNickname(int size) const
{
    if (size == 10 && Nickname.size() >= 11)
        return Nickname.substr(0, 9) + ".";
    else
        return Nickname;
}

std::string	Contact::_getPhone(void) const
{
	return Phone;
}
int Contact::_getIndex() const{
    return index;
}

std::string Contact::_getSecret(void) const
{
    return Secret;
}

void Contact::WName(std::string info) {
        FName = info;
}

void Contact::WLName(std::string info) {
        LName = info;
}

void Contact::WNickN(std::string info) {
        Nickname = info;
}

void Contact::WPhone(std::string info) {
    Phone = info;
}

void Contact::WSecret(std::string info) {
    Secret = info;
}

void Contact::_printinfo() const {
    std::cout << _getFName(0) << std::endl;
    std::cout << _getLName(0) << std::endl;
    std::cout << _getNickname(0) << std::endl;
    std::cout << _getPhone() << std::endl;
    std::cout << _getSecret() << std::endl;
}

