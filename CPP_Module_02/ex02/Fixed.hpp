#ifndef FIXED_HPP
#define FIXED_HPP
#include <math.h>
#include <iostream>

/*******COLORS*******/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define DEFAULT "\033[0m"

class Fixed{
	public:
		// CONSTRUCTORS AND DECONSTRUCTORS
		Fixed(void); 							//Canonical
		Fixed(Fixed const &copy);				//Canonical
		Fixed(int const numb);
		Fixed(float const numb);
		~Fixed(void); 							//Canonical

		// OPERATOR OVERLOAD
		Fixed &	operator=(Fixed const & rhs); 	//Canonical
		
		// USEFUL FUNCTIONS
		static Fixed max(Fixed &a, Fixed &b);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _f_point;
		static const int _f_bits;
};

std::ostream &operator<<(std::ostream &o, const Fixed &original);

#endif