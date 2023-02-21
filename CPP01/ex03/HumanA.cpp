/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:01:27 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 14:01:29 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arme) : name(name), equipped(arme) {

}

HumanA::~HumanA(){

}

void    HumanA::Attack() {
    std::cout << name << " is attacking with " << equipped.GetType() << std::endl;
}
