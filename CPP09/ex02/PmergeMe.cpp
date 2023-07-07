#include "PmergeMe.hpp"

void    Split_Vector(std::vector<int> *tab)
{
    int mid = tab->size() / 2;
    std::vector<int> *right_tab = new std::vector<int>;

    while (mid > 0)
    {
        right_tab->push_back(tab->back());
        tab->pop_back();
        mid--;
    }
    if (right_tab->size() > 1)
        Split_Vector(right_tab);
    if (tab->size() > 1)
        Split_Vector(tab);
    std::vector<int>::iterator right_it = right_tab->end();
    std::vector<int>::iterator left_it = tab->end();
    left_it--;
    right_it--;
    while (right_tab->size() > 0)
    {
        if (*left_it <= *right_it)
        {
            tab->insert(left_it + 1, *right_it);
            right_tab->pop_back();
            right_it = right_tab->end() - 1;
            left_it = tab->end() - 1;
        }
        else if (left_it == tab->begin())
        {
            tab->insert(left_it, *right_it);
            right_tab->pop_back();
            right_it = right_tab->end() - 1;
            left_it = tab->end() - 1;
        }
        else
            left_it--;
    }
    delete right_tab;
}

void Split_List(std::list<int> *tab)
{
    int mid = tab->size() / 2;
    std::list<int> *right_tab = new std::list<int>;

    while (mid > 0)
    {
        right_tab->push_back(tab->back());
        tab->pop_back();
        mid--;
    }
    if (right_tab->size() > 1)
        Split_List(right_tab);
    if (tab->size() > 1)
        Split_List(tab);
    std::list<int>::iterator right_it = right_tab->end();
    std::list<int>::iterator left_it = tab->end();
    left_it--;
    right_it--;
    while (right_tab->size() > 0)
    {
        if (*left_it <= *right_it)
        {
            left_it++;
            tab->insert(left_it, *right_it);
            right_tab->pop_back();
            right_it = right_tab->end();
            right_it--;
            left_it = tab->end();
            left_it--;
        }
        else if (left_it == tab->begin())
        {
            tab->insert(left_it, *right_it);
            right_tab->pop_back();
            right_it = right_tab->end();
            right_it--;
            left_it = tab->end();
            left_it--;
        }
        else
            left_it--;
    }
    delete right_tab;
}