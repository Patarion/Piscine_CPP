//
// Created by Jasmin Gagnon on 3/6/23.
//
#include "easyfind.hpp"

int main (void)
{
    std::list<int> tab;
    int r_val;

    r_val = -1;
    for (int i = 0; i < 10 ; i++)
    {
        tab.push_front(i);
    }
    r_val = easyfind(tab, 5);
    std::cout << r_val << std::endl;
}