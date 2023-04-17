/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:50:14 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:50:21 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string info){
    name = info;
}

Zombie::~Zombie(void){
    std::cout << this->name << " a été tué" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
    Zombie* newZombie = new Zombie(name);
    return newZombie;
}

void randomChump(std::string name){
    Zombie Bob(name);

    Bob.announce();
}
