#include "Fixed.hpp"

//*****************
// CONSTRUCTORS AND DECONSTRUCTORS
//*****************

Fixed::Fixed(void){
	// std::cout << "Default constructor called!" << std::endl;
	this->_f_point = 0;
}

Fixed::Fixed(Fixed const &copy){
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int numb){
	// std::cout << "Int constructor called!" << std::endl;
	// this->_f_point = numb * (1 << _f_bits); //get fixed number from int
	this->_f_point = numb << this->_f_bits;

}

Fixed::Fixed(const float numb){
	// std::cout << "Float constructor called!" << std::endl;
	this->_f_point = roundf(numb * (1 << this->_f_bits)); //roundf  used to round the float to int
}

Fixed::~Fixed(void){
	// std::cout << "Defaul deconstructor called!" << std::endl;
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

//*****************
// OPERATOR OVERLOAD
//*****************

std::ostream &operator<<(std::ostream &o, const Fixed &original){
	o << original.toFloat();
	return (o);
}

//ASSIGNEMENT
Fixed & Fixed::operator=(Fixed const &rhs){
	// std::cout <<"Assignement operator called!" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}



//ARITHEMETIC
Fixed Fixed::operator+(Fixed const & other)const{
	Fixed sum;
	sum.setRawBits(this->getRawBits() + other.getRawBits());
	return sum;
}

Fixed Fixed::operator-(Fixed const & other)const{
	Fixed minus;
	minus.setRawBits(this->getRawBits() - other.getRawBits());
	return minus;
}

Fixed Fixed::operator*(const Fixed &other)const{
	// Fixed mult;
	// mult.setRawBits(this->getRawBits()*other.getRawBits());
	// return mult;
	Fixed result;
    result.setRawBits(this->_f_point * other.getRawBits() / (1 << this->_f_bits));
    return result;
}

Fixed Fixed::operator/(Fixed const & other)const{
	// Fixed div;
	// div.setRawBits(this->getRawBits() / other.getRawBits());
	// return div;
	return(Fixed(toFloat() / other.toFloat()));
}

//MINS AND MAXS(CONST AND NOT)
//learning ternary operators : (condition) ? (expression_if_true) : (expression_if_false)
						// if (a < b) {
						//   return a;
						// } else {
						//   return b;
						// }

Fixed & Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	return (a < b ? a : b);
}


//COMPARISON OPERATORS
bool Fixed::operator<(const Fixed & other)const{
	return (_f_point < other.getRawBits());
}

bool Fixed::operator<=(const Fixed & other)const{
	return (_f_point <= other.getRawBits());
}

bool Fixed::operator>=(const Fixed & other)const{
	return (_f_point > other.getRawBits());
}

bool Fixed::operator>(const Fixed & other)const{
	return (_f_point >= other.getRawBits());
}

bool Fixed::operator==(const Fixed & other)const{
	return (_f_point == other.getRawBits());
}

bool Fixed::operator!=(const Fixed & other)const{
	return (_f_point != other.getRawBits());
}

//INCREMENTATION AND DECREMENTATION

//POST
// the function returns the previously created ret object with the original value (before the incrementation).
// This is because the post-increment operator returns the original value of the object before the increment, 
// not the new value. (same for the decrement)

Fixed Fixed::operator++(int){
	Fixed inc = *this;
	this->_f_point +=1;
	return inc;
}

Fixed Fixed::operator--(int){
	Fixed dec = *this;
	this->_f_point -=1;
	return dec;
}

//PRE

Fixed & Fixed::operator++(void){
	this->_f_point +=1;
	return *this;
}


Fixed & Fixed::operator--(void){
	this->_f_point -=1;
	return *this;
}

