/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:19:50 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 16:19:51 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

void multiply(int &a)
{
    a *= 2;
}

void to_print(std::string &str)
{
    std::cout << str << " ";
}

int main (void) {
    int tab[7] = {4, 5, 6, 7, 8, 9, 10};
    std::string str_tab[4] = {"Bon", "matin", "les", "potos"};
    int j;

    j = -1;
    iter(tab, 7, &multiply);
    while (tab[++j])
        std::cout << tab[j] << " ";
    iter(str_tab, 4, &to_print);

}
