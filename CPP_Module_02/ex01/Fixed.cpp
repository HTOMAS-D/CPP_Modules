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

Fixed::Fixed(int const numb){
	std::cout << "Int constructor called!" << std::endl;
	this->_f_point = numb * (1 << _f_bits); //get fixed number from int
}

Fixed::Fixed(float const numb){
	std::cout << "Float constructor called!" << std::endl;
	this->_f_point = roundf(numb * (1 << this->_f_bits)); //roundf  used to round the float to int
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
//	std::cout << "getRawBits called!" << std::endl;
	return (this->_f_point);
}

void Fixed::setRawBits(int const raw){
	this->_f_point = raw;
}


// The conversion from a fixed-point number to an integer is done by shifting the
// the fixed-point number right by the number of fractional bits(_f_bits), therefore
// removing the fractional part of the number and leavin only the integer part

int Fixed::toInt(void)const{
	return((this->_f_point >> this->_f_bits));
}

// Converts fixed-point to float, by dividing the fixed-point number by a factor of 2
// raised to the power of the number of fractional bits :
// equivalent to -> "2^_f_bits"

float Fixed::toFloat(void)const{
	return((float)this->_f_point / (1 << this->_f_bits));
}

std::ostream &operator<<(std::ostream &o, const Fixed &original){
	o << original.toFloat();
	return (o);
}