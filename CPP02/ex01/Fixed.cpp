/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:43:48 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/23 14:43:50 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0.0f){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) : _val(roundf(nbr << _bits)) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) : _val(roundf(nbr * (float)(1 << _bits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpy) : _val(cpy._val) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
//    std::cout << "getRawBits member function called" << std::endl;
    return _val;
}

void    Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member fuction called" << std::endl;
    _val = raw;
}

int Fixed::toInt() const {
    return this->_val >> _bits;
}

float Fixed::toFloat() const {
    return (float) this->_val / (float)(1 << _bits);
}

Fixed & Fixed::operator=(Fixed const & info)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &info)
        this->_val = info.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return out;
}
