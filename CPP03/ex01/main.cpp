/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:30:10 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:30:12 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int main (void)
{
//    Claptrap cp1("Bob");
    Scavtrap scp1("Larry");

//    cp1.attack("George");
//    cp1.beRepaired(1);
    scp1.attack("George");
    scp1.beRepaired(5);
    scp1.guardGate();
}
