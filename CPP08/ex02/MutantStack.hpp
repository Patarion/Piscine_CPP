/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:03:05 by jgagnon           #+#    #+#             */
/*   Updated: 2023/06/20 13:03:07 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <iterator>

#ifndef MUTANT_STACK
# define MUTANT_STACK

template <typename T>
class MutantStack : public std::stack<T>{
public :
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() {
        return (std::stack<T>::c.begin());
    }
    iterator end() {
        return (std::stack<T>::c.end());
    }
    const_iterator begin() const{
        return (std::stack<T>::c.begin());
    }
    const_iterator end() const{
        return (std::stack<T>::c.end());
    }
};
#endif
