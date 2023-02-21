/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:24:51 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 13:24:54 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie  Jack("Jack");
    Zombie  *Larry;

    Larry = newZombie("Larry");
    RandomChump("Bob");
    Jack.announce();
    Larry->announce();
    delete Larry;
    return (0);
}
