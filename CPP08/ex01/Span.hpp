/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:02:07 by jgagnon           #+#    #+#             */
/*   Updated: 2023/06/20 13:02:18 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by Jasmin Gagnon on 3/6/23.
//

#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP
#include <list>
#include <exception>
#include <iostream>
#include <random>

class Span {
public :
    Span(unsigned int N);
    Span(Span &cpy);
    virtual ~Span();
    int     shortestSpan();
    long long     longestSpan();
	void	showTabSorted();
    void    addNumber(int nbr);
    void    fullTab();
    long int     RandomNbr();

class SpanFull : public std::exception{
public :
    virtual const char *FullErr() const throw() {
        return ("The span can't have anymore numbers");
    }
};
class SpanEmpty : public std::exception{
public :
    virtual const char *EmptyErr() const throw() {
        return ("The span has no or only 1 number");
    }
};
    Span &operator=(Span &cpy);
private :
    std::list<int>  *_tab;
    unsigned int    _size;
    unsigned int    _index;
};


#endif //CPP_SPAN_HPP
