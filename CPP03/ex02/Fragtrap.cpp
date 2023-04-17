/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:33:32 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:33:34 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

Fragtrap::Fragtrap(std::string name) : Claptrap(name) {
    _Hit_Points = 100;
    _Energy = 100;
    _Attack_Damage = 30;
    std::cout << "L'explosion constructive arrive sur ton écran drette là!" << std::endl;
    std::cout << "HERE COMES THE BOOM! HERE COMES THE BOOM!" << std::endl;
}

Fragtrap::Fragtrap(Fragtrap &cpy) : Claptrap(cpy) {
    std::cout << "Ouin ben on vient de faire appel à Mr. Bay pour plus d'explosion!" << std::endl;
    *this = cpy;
}

Fragtrap::~Fragtrap() {
    std::cout << "L'explosion fut si grosse que ça vira en pet sauce!" << std::endl;
}

void Fragtrap::highFivesGuys(void) {
    std::cout << "Il est temps d'un High Five EXPLOSIF!" << std::endl;
    std::cout << "KABOOOOUUUUUMMMMM!!!!!" << std::endl;
}

Fragtrap & Fragtrap::operator=(Fragtrap &cpy)
{
    this->_Name = cpy._Name;
    this->_Hit_Points = cpy._Hit_Points;
    this->_Energy = cpy._Energy;
    this->_Attack_Damage = cpy._Attack_Damage;
    return *this;
}
