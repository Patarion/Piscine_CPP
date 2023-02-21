/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:31:38 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 13:31:39 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name){
    int i;

    Zombie* Horde = new Zombie[N];
    for (i = 0; i < N; i++) {
        Horde[i].Init_Name(name);
        Horde[i].announce();
    }
    return Horde;
}
