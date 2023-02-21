/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:31:15 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 13:31:17 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){

}

Zombie::~Zombie(void){
    std::cout << this->name << " a été tué" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
    Zombie* newZombie = new Zombie;

    newZombie->Init_Name(name);
    return newZombie;
}

void RandomChump(std::string name){
    Zombie Bob;

    Bob.Init_Name(name);
    Bob.announce();
}

void Zombie::Init_Name(std::string info){
    name = info;
}

