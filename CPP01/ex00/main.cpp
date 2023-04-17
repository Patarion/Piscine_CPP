/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:49:50 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:50:03 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie  Jack("Jack");
    Zombie  *Larry;

    Larry = newZombie("Larry");
    randomChump("Bob");
    Jack.announce();
    Larry->announce();
    delete Larry;
    return (0);
}
