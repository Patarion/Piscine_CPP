/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:28:48 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/27 14:28:52 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0.0f) {
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpy) : val(cpy.val) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return val;
}

void    Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits memeber fuction called" << std::endl;
    val = raw;
}

Fixed & Fixed::operator=(Fixed const & info)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &info)
        this->val = info.getRawBits();
    return *this;
}
