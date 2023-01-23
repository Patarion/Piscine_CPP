#include "Fixed.hpp"

Fixed::Fixed() : val(0.0f) {
    std::cout << "Constructor called!" << std::endl;
}

Fixed::Fixed(const int nbr) : val(roundf(nbr << _bits)) {

}

Fixed::Fixed(const float nbr) : val(roundf(nbr * (float)(1 << _bits))) {

}

Fixed::Fixed(Fixed const &cpy) {
    std::cout << "Constructor by copy called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::_getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return val;
}

void    Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits memeber fuction called" << std::endl;
    val = raw;
}

int Fixed::toInt() const {
    return this->val >> _bits;
}

float Fixed::toFloat() const {
    return (float) this->val / (float)(1 << _bits);
}

Fixed & Fixed::operator=(Fixed const & info)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &info)
        this->val = info._getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream &out, Fixed const &val)
{
    out << val.toFloat();
    return out;
}