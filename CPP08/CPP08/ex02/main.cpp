/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:03:19 by jgagnon           #+#    #+#             */
/*   Updated: 2023/06/20 13:03:20 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;
    mstack.push(69);
    mstack.push(17);
    std::cout << "Le tableau a " << mstack.top()<< " sur le dessus de la stack"<< std::endl;
    std::cout << "On retire un élément de la stack" << std::endl;
    mstack.pop();
    std::cout << "Le tableau contient maintenant ";
    std::cout << mstack.size() << " élément(s)" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(73);
    mstack.push(0);
    mstack.push(-69);
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "On affiche tous les éléments de la stack par itération" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin() ; it != ite ; it++)
        std::cout << *it << std::endl;

    std::list<int> list;

    list.push_back(69);
    list.push_back(3);
    list.push_back(5);
    list.push_back(73);
    list.push_back(0);
    list.push_back(-69);

    std::list<int>::iterator ite_l = list.end();
    std::cout << "On affiche tous les éléments de la list par itération" << std::endl;
    for (std::list<int>::iterator it_l = list.begin() ; it_l != ite_l ; it_l++)
        std::cout << *it_l << std::endl;
}
