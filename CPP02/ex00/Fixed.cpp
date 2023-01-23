#include "Fixed.hpp"

Fixed::Fixed() : val(0.0f) {
    std::cout << "Constructor called!" << std::endl;
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

Fixed & Fixed::operator=(Fixed const & info)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &info)
        this->val = info._getRawBits();
    return *this;
}