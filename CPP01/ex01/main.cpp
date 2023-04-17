/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:51:31 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:51:37 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie  Jack;
    Zombie  *Larry;
    Zombie  *Meute;

    Jack.init_name("Jack");
    Larry = newZombie("Larry");
    Meute = zombieHorde(10, "Thomas");
    randomChump("Bob");
    Jack.announce();
    Larry->announce();
    delete Larry;
    delete [] Meute;
    return (0);
}
