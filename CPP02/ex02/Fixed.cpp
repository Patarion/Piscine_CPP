/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:30:14 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/27 14:31:31 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _val(0.0f) {
//    std::cout << "Constructor called!" << std::endl;
}

Fixed::Fixed(const int nbr) : _val(roundf(nbr << _bits)) {

}

Fixed::Fixed(const float nbr) : _val(roundf(nbr * (float)(1 << _bits))) {

}

Fixed::Fixed(Fixed const &cpy) : _val(cpy._val) {
//    std::cout << "Constructor by copy called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed() {
//    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
//    std::cout << "getRawBits member function called" << std::endl;
    return _val;
}

void    Fixed::setRawBits(const int raw) {
//    std::cout << "setRawBits memeber fuction called" << std::endl;
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
//    std::cout << "Assignation operator called" << std::endl;
    if (this != &info)
        this->_val = info.getRawBits();
    return *this;
}

bool Fixed::operator>(Fixed const &var){
    return (this->_val > var.getRawBits() ? true : false);
}
bool Fixed::operator<(Fixed const &var){
    return (this->_val < var.getRawBits() ? true : false);
}
bool Fixed::operator>=(Fixed const &var){
    return (this->_val >= var.getRawBits() ? true : false);
}
bool Fixed::operator<=(Fixed const &var){
    return (this->_val <= var.getRawBits() ? true : false);
}
bool Fixed::operator==(Fixed const &var){
    return (this->_val == var.getRawBits() ? true : false);
}
bool Fixed::operator!=(Fixed const &var){
    return (this->_val != var.getRawBits() ? true : false);
}

float Fixed::operator+(Fixed const &var){
    return (this->toFloat() + var.toFloat());
}
float Fixed::operator-(Fixed const &var){
    return (this->toFloat() - var.toFloat());
}
float Fixed::operator*(Fixed const &var){
    return (this->toFloat() * var.toFloat());
}
float Fixed::operator/(Fixed const &var){
    return (this->toFloat() * var.toFloat());
}

Fixed &Fixed::operator++(){
    this->_val++;
    return *this;
}
Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    ++this->_val;
    return tmp;
}
Fixed &Fixed::operator--(){
    this->_val--;
    return *this;
}
Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    --this->_val;
    return tmp;
}

std::ostream & operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return out;
}
Fixed & Fixed::min(Fixed &nb1, Fixed &nb2){
    return (nb1.toFloat() < nb2.toFloat() ? nb1 : nb2);
}
const Fixed & Fixed::min(Fixed const &nb1, Fixed const &nb2){
    return (nb1.toFloat() < nb2.toFloat() ? nb1 : nb2);
}
Fixed & Fixed::max(Fixed &nb1, Fixed &nb2){
    return (nb1.toFloat() > nb2.toFloat() ? nb1 : nb2);
}
const Fixed & Fixed::max(Fixed const &nb1, Fixed const &nb2){
    return (nb1.toFloat() > nb2.toFloat() ? nb1 : nb2);
}
