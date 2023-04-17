/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:29:01 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:29:03 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main (void)
{
    Claptrap cp1("Bob");
    Claptrap cp2(cp1);

    cp1.attack("George");
    cp1.beRepaired(1);
    cp2.attack("George");
    cp2.beRepaired(10);
}
