/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:53:20 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:53:23 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    int i;

    Zombie* Horde = new Zombie[N];
    for (i = 0; i < N; i++) {
        Horde[i].init_name(name);
        Horde[i].announce();
    }
    return Horde;
}
