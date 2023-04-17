/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:25:21 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 16:25:23 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

#include <iostream>
#include <exception>

template<class T>

class Array {
public :
    Array() : _array(new T[0]), _size(0) {};
    Array(unsigned int n) : _array(new T[n]), _size(n) {};
    Array(Array &cpy) : _array(cpy._array), _size(cpy._size) {
        *this = cpy;
    };
    ~Array() {
        delete[] _array;
    };
    unsigned int size(void) {
        return _size;
    };

    T& operator[](unsigned int index)
    {
        if (index >= size())
        {
            throw std::out_of_range("Index fourni plus gros que la grosseur du tableau");
        }
        return (_array[index]);
    }
    void PrintArray(){
        unsigned int i;

        for( i = 0; i < size() ; i++)
            std::cout << "Index : " << i << " contient ceci " << _array[i] << std::endl;
    }
    Array<int>& operator=(Array<int> &cpy)
    {
        unsigned int i;
        this->_array = new T[_size];

        for (i = 0 ; i < _size; i++)
        {
            this->_array[i] = cpy._array[i];
        }
        return *this;
    }
private :
    T * _array;
    unsigned int _size;
};

#endif //CPP_ARRAY_HPP
