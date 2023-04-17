/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:56:36 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:56:38 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name){
    setType(name);
}

Weapon::~Weapon(){

}

void Weapon::setType(std::string name){
    type = name;
}

std::string Weapon::_getType() const {
    return type;
}
