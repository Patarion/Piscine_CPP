/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:55:48 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:56:24 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {

}

HumanB::~HumanB(){

}

void    HumanB::attack() {
    std::cout << name << " is attacking with " << equipped->_getType() << std::endl;
}

void	HumanB::setWeapon(Weapon arme)
{
	equipped = &arme;
}
