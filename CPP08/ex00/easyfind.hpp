//
// Created by Jasmin Gagnon on 3/6/23.
//

#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>

template <typename T>
int easyfind(std::list<T> tab, int r)
{
    std::list<int>::iterator it;
    std::list<int>::iterator ite;

    if (sizeof(T) != sizeof(int))
        return (-1);
    ite = tab.end();
    for (it = tab.begin() ; it != ite ; ++it)
    {
        if (*it == r)
            return (*it);
    }
    std::cout << "Aucune occurence détectée" << std::endl;
    return (-1);
}

#endif //CPP_EASYFIND_HPP
