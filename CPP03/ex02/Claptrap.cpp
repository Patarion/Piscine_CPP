/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:33:08 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:33:11 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(std::string name) :
    _Name(name), _Hit_Points(10), _Energy(10), _Attack_Damage(0) {
    std::cout << _Name << " enters the Borderlands!" << std::endl;
}

Claptrap::Claptrap(Claptrap &cpy) {
    std::cout << cpy._Name << " has cloned himself!" << std::endl;
    *this = cpy;
}
Claptrap::~Claptrap() {
    std::cout << "Nobody loves " << _Name << " so we killed him!" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount) {
    _Hit_Points -= amount;
//    std::cout << _name << "has now " << _Hit_points << " Hit points!" << std::endl;
    std::cout << "It's opponent has now " << _Hit_Points << " Hit points!" << std::endl;
}

void Claptrap::attack(const std::string &target) {
    if (_Energy > 0)
    {
        _Energy -= 1;
        std::cout << target << " has been attacked by " << _Name;
        std::cout << " for " << _Attack_Damage << " that must hurt!" << std::endl;
//        takeDamage(_Attack_Damage);
    }
}

void Claptrap::beRepaired(unsigned int amount) {
    if (_Energy > 0)
    {
        _Hit_Points += amount;
        _Energy -= 1;
        std::cout << _Name << " has been repaired for " << amount;
        std::cout << " and has now " << _Hit_Points << " Hit points!" << std::endl;
    }
}

Claptrap & Claptrap::operator=(Claptrap &cpy)
{
    this->_Name = cpy._Name;
    this->_Hit_Points = cpy._Hit_Points;
    this->_Energy = cpy._Energy;
    this->_Attack_Damage = cpy._Attack_Damage;
    return *this;
}
