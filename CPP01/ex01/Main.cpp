/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:28:20 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 13:28:21 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie  Jack;
    Zombie  *Larry;
    Zombie  *Meute;

    Jack.Init_Name("Jack");
    Larry = newZombie("Larry");
    Meute = ZombieHorde(10, "Thomas");
    RandomChump("Bob");
    Jack.announce();
    Larry->announce();
    delete Larry;
    delete [] Meute;
    return (0);
}
