#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cstdlib>
#include <ctype.h>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter & operator = (const ScalarConverter &assign);

	public:
		static void		convert(std::string lit);
		
};


void		printer(char c);
void		printer(int i);
void		printer(float f);
void		printer(double d);


void 	    printChar(char c);
void		printInt(int i);
void		printFloat(float f);
void		printDouble(double d);


int		floatPseudolits(std::string lit);
int		doublePseudolits(std::string lit);

int		isChar(std::string lit);
int		isInt(std::string lit);
int		isFloat(std::string lit);
int		isDouble(std::string lit);
int		getType(std::string lit);
