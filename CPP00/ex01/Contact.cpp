/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:01:35 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 14:03:50 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : index(0)
{
//	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
//	std::cout << "Destructor called" << std::endl;
}

std::string Contact::GetFName(int size) const
{
    if (size == 10 && _FName.size() >= 11)
        return _FName.substr(0, 9) + ".";
    else
	    return _FName;
}

std::string	Contact::GetLName(int size) const
{
    if (size == 10 && _LName.size() >= 11)
        return _LName.substr(0, 9) + ".";
    else
        return _LName;
}

std::string	Contact::GetNickname(int size) const
{
    if (size == 10 && _Nickname.size() >= 11)
        return _Nickname.substr(0, 9) + ".";
    else
        return _Nickname;
}

std::string	Contact::GetPhone(void) const
{
	return _Phone;
}
int Contact::GetIndex() const{
    return index;
}

std::string Contact::GetSecret(void) const
{
    return _Secret;
}

void Contact::WName(std::string info) {
        _FName = info;
}

void Contact::WLName(std::string info) {
        _LName = info;
}

void Contact::WNickN(std::string info) {
        _Nickname = info;
}

void Contact::WPhone(std::string info) {
    _Phone = info;
}

void Contact::WSecret(std::string info) {
    _Secret = info;
}

void Contact::PrintInfo() const {
    std::cout << GetFName(0) << std::endl;
    std::cout << GetLName(0) << std::endl;
    std::cout << GetNickname(0) << std::endl;
    std::cout << GetPhone() << std::endl;
    std::cout << GetSecret() << std::endl;
}

