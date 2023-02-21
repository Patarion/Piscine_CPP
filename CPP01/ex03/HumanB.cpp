/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:01:59 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 14:02:01 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {

}

HumanB::~HumanB(){

}

void    HumanB::Attack() {
    std::cout << name << " is attacking with " << equipped->GetType() << std::endl;
}

void	HumanB::SetWeapon(Weapon arme)
{
	equipped = &arme;
}
