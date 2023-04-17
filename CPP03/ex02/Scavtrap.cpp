/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:34:07 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:34:08 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

Scavtrap::Scavtrap(std::string name) : Claptrap(name) {
    _Hit_Points = 100;
    _Energy = 50;
    _Attack_Damage = 20;
    std::cout << name << " 2.0 est créé! " << "L'update n'enlève pas qu'il est tannant..." << std::endl;
}

Scavtrap::Scavtrap(Scavtrap &cpy) : Claptrap(cpy) {
    std::cout << "Pourquoi on copie un Scavtrap?!" << std::endl;
    *this = cpy;
}

Scavtrap::~Scavtrap() {
    std::cout << "Scavtrap a succumbé aux escaliers ou d'une balle perdue. J'vois pas de différence!" << std::endl;
}

void    Scavtrap::attack(const std::string &target){
    std::cout << "Scavtrap a donné une taloche de " << _Attack_Damage << " dégâts à " << target;
    std::cout << " ça doit avoir fait mal" << std::endl;
    _Energy -= 1;
//    target.takeDamage(_attack_damage);
}

void    Scavtrap::guardGate(){
    std::cout << "Scavtrap se met en mode tortue (Gate Keeper)! Il subira aucun dégàt pour 1 tour." << std::endl;
    _Energy -= 3;
}

Scavtrap & Scavtrap::operator=(Scavtrap &cpy)
{
    this->_Name = cpy._Name;
    this->_Hit_Points = cpy._Hit_Points;
    this->_Energy = cpy._Energy;
    this->_Attack_Damage = cpy._Attack_Damage;
    return *this;
}
