/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:01:28 by jgagnon           #+#    #+#             */
/*   Updated: 2023/06/20 13:01:32 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Jasmin Gagnon on 3/6/23.
//
#include "easyfind.hpp"

int main (void)
{
    std::list<int> tab;
    std::list<char> bad_tab;
    int r_val;

    r_val = -1;
    bad_tab.push_front('2');
    bad_tab.push_front('p');
    r_val = easyfind(bad_tab, 6);
    for (int i = 0; i < 10 ; i++)
    {
        tab.push_front(i);
    }
    r_val = easyfind(tab, 5);
    std::cout << r_val << std::endl;
    r_val = easyfind(tab, 11);
    std::cout << r_val << std::endl;
}
