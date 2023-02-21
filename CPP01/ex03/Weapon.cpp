/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:02:31 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 14:02:33 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name){
    SetType(name);
}

Weapon::~Weapon(){

}

void Weapon::SetType(std::string name){
    _type = name;
}

std::string Weapon::GetType() const {
    return _type;
}
