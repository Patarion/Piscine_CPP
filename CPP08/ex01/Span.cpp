/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:01:58 by jgagnon           #+#    #+#             */
/*   Updated: 2023/06/20 13:01:59 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Jasmin Gagnon on 3/6/23.
//

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), _index(0){
    _tab = new std::list<int>;
}
Span::Span(Span &cpy){
    *this = cpy;
}

Span::~Span()
{
    delete _tab;
}

int     Span::shortestSpan(){

    std::list<int>::iterator 	it1;
    std::list<int>::iterator 	it2;
	int							r_val;
    r_val = INT_MAX;

    try{
        if (_tab->size() > 1)
        {
            _tab->sort();
            it1 = _tab->begin();
            it2 = _tab->begin();
            it2++;
			while (it1 != _tab->end())
			{
				if (*it2 - *it1 < r_val && it1 != it2 && (*it2 - *it1) > 0)
					r_val = *it2 - *it1;
				it2++;
                if (it2 == _tab->end())
                {
                    it2 = _tab->begin();
                    it1++;
                }
			}
            return (r_val);
        }
        else
            throw Span::SpanEmpty();
    }
    catch (Span::SpanEmpty)
    {
        std::cout << Span::SpanEmpty().EmptyErr() << std::endl;
    }
    return (0);
}

long long	Span::longestSpan(){
    std::list<int>::iterator it1;
    std::list<int>::iterator it2;
    try{
        if (_tab->size() > 1)
        {
            _tab->sort();
            it1 = _tab->begin();
            it2 = _tab->end();
            it2--;
            return (*it2 - *it1);
        }
        else
            throw Span::SpanEmpty();
    }
    catch (Span::SpanEmpty)
    {
    	std::cout << Span::SpanEmpty().EmptyErr() << std::endl;
    }
    return (0);
}

void	Span::showTabSorted(){
	std::list<int>::iterator it;
	std::list<int>::iterator ite;

	_tab->sort();
	it = _tab->begin();
	ite = _tab->end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
}

void Span::addNumber(int nbr)
{
    try{
        if (_index >= _size)
            throw Span::SpanFull();
    }
    catch (Span::SpanFull)
    {
        std::cout << Span::SpanFull().FullErr() << std::endl;
        return ;
    }
    _tab->push_back(nbr);
    _index++;
}

long int Span::RandomNbr(){
    long int r_val;

    r_val = rand() % 1000;
    if ((rand() % 2) == 0)
        r_val *= -1;
    return (r_val);
}

void Span::fullTab(){
    srand(time(0));
    while (_index < _size)
    {
        _tab->push_front(RandomNbr());
        _index++;
    }
}

Span &Span::operator=(Span &cpy){

    std::list<int>::iterator it;
    std::list<int>::iterator ite;
    this->_index = cpy._index;
    ite = cpy._tab->end();
    for (it = _tab->begin(); it != ite ; it++)
    {
        this->_tab->push_front(*it);
    }
    return *this;
}
