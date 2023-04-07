#ifndef FIXED_HPP
#define FIXED_HPP
#include <math.h>
#include <iostream>
#include <iomanip>
#include <cmath>

/*******COLORS*******/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define DEFAULT "\033[0m"

class Fixed{
	private:
		int _f_point;
		static const int _f_bits = 8;
	
	public:
		// CONSTRUCTORS AND DECONSTRUCTORS
		Fixed(void); 							//Canonical
		Fixed(Fixed const &copy);				//Canonical
		Fixed(int const numb);
		Fixed(float const numb);
		~Fixed(void); 							//Canonical

		//ASSIGNEMENT OPERATOR
		Fixed &	operator=(Fixed const & rhs); 	//Canonical
		
		//ARITHMETIC OPERATORS
		Fixed operator+(Fixed const & other)const;
		Fixed operator-(Fixed const & other)const;
		Fixed operator*(const Fixed &other)const;
		Fixed operator/(Fixed const & other)const;		
		
		//COMPARISON OPERATORS
		bool operator<(const Fixed & other)const;
		bool operator>(const Fixed & other)const;
		bool operator<=(const Fixed & other)const;
		bool operator>=(const Fixed & other)const;
		bool operator==(const Fixed & other)const;
		bool operator!=(const Fixed & other)const;
		
		//MIN AND MAXS
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		
		//INCREMENTATION AND DECREMENTATION
		Fixed operator++(int);//a++
		Fixed operator--(int);//a--
		Fixed &operator++(void);//++a
		Fixed &operator--(void);//--a

		// USEFUL FUNCTIONS
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, const Fixed &original);

#endif