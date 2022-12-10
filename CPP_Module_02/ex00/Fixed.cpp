#include "Fixed.hpp"

const int Fixed::_f_bits = 8;

Fixed::Fixed(void){
	std::cout << "Default constructor called!" << std::endl;
	this->_f_point = 0;
}

Fixed::Fixed(Fixed const &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void){
	std::cout << "Deconstructor called!" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout <<"Assignement operator called!" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits called!" << std::endl;
	return (this->_f_point);
}

void Fixed::setRawBits(int const raw){
	this->_f_point = raw;
}