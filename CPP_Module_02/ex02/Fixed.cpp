#include "Fixed.hpp"

const int Fixed::_f_bits = 8;

//*****************
// CONSTRUCTORS AND DECONSTRUCTORS
//*****************

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
	std::cout << "Defaul deconstructor called!" << std::endl;
}

//*****************
// RANDOM FUNCTIONS
//*****************

int Fixed::getRawBits(void) const{
//	std::cout << "getRawBits called!" << std::endl;
	return (this->_f_point);
}

void Fixed::setRawBits(int const raw){
	this->_f_point = raw;
}

int Fixed::toInt(void)const{
	return((this->_f_point >> this->_f_bits));
}

float Fixed::toFloat(void)const{
	return((float)this->_f_point / (1 << this->_f_bits));
}


// Fixed Fixed::max(const Fixed &a, const Fixed &b){

// }

//*****************
// OPERATOR OVERLOAD
//*****************

std::ostream &operator<<(std::ostream &o, const Fixed &original){
	o << original.toFloat();
	return (o);
}

//ASSIGNEMENT
Fixed & Fixed::operator=(Fixed const &rhs){
	std::cout <<"Assignement operator called!" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}



//ARITHEMETIC
Fixed Fixed::operator+(Fixed const & other){
	Fixed sum;
	sum.setRawBits(this->getRawBits() + other.getRawBits());
	return sum;
}

Fixed Fixed::operator-(Fixed const & other){
	Fixed minus;
	minus.setRawBits(this->getRawBits() - other.getRawBits());
	return minus;
}

Fixed Fixed::operator*(Fixed const & other){
	Fixed mult;
	mult.setRawBits(this->getRawBits()*other.getRawBits());
	return mult;
}

Fixed Fixed::operator/(Fixed const & other){
	Fixed div;
	div.setRawBits(this->getRawBits() / other.getRawBits());
	return div;
}

//COMPARISON OPERATORS
bool Fixed::operator<(const Fixed & other){
	return (_f_point < other.getRawBits());
}

bool Fixed::operator<=(const Fixed & other){
	return (_f_point <= other.getRawBits());
}

bool Fixed::operator>=(const Fixed & other){
	return (_f_point > other.getRawBits());
}

bool Fixed::operator>(const Fixed & other){
	return (_f_point >= other.getRawBits());
}

bool Fixed::operator==(const Fixed & other){
	return (_f_point == other.getRawBits());
}

bool Fixed::operator!=(const Fixed & other){
	return (_f_point != other.getRawBits());
}