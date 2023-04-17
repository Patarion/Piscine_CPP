/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:16:53 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:16:54 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

int main (void)
{
    srand(time(0));
    Base *b1 = generate();
    Base *b2 = generate();
    Base *b3 = generate();
    Base &b4 = *b1;
    Base &b5 = *b2;
    Base &b6 = *b3;

    identify(b1);
    identify(b2);
    identify(b3);
    identify(b4);
    identify(b5);
    identify(b6);
    delete b1;
    delete b2;
    delete b3;
}
