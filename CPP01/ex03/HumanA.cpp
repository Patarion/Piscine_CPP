/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:54:53 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:54:55 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arme) : name(name), equipped(arme) {

}

HumanA::~HumanA(){

}

void    HumanA::attack() {
    std::cout << name << " is attacking with " << equipped._getType() << std::endl;
}
