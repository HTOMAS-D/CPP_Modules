#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){(void) copy;}

ScalarConverter::~ScalarConverter(){}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign){
	(void) assign;
	return *this;
}

void printChar(char c){std::cout << "char: " << (std::isprint(c) ? std::string(1, c) : "Non displayable") << std::endl;}

void printInt(int i){std::cout << "Int: " << i << std::endl;}

void printFloat(float f){std::cout << "Float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;}

void printDouble(double d){std::cout << "Double: " << std::fixed << std::setprecision(1) << d << std::endl;}

void	ScalarConverter::convert(std::string lit){
	float	f;

	switch (getType(lit)){
		case 1:
			printer(lit[0]);
			break ;
		case 2:
			printer(atoi(lit.c_str()));
			break ;
		case 3:
			lit.resize(lit.size() - 1);
			f = strtof(lit.c_str(), NULL);
			printer(f);
			break ;
		case 4:
			printer(strtod(lit.c_str(), NULL));
			break ;
		case 5:
			std::cout << "Invalid input" << std::endl;
			break ;
	}
}

int getType(std::string lit){
    if (isChar(lit)) return 1;
    if (isInt(lit)) return 2;
    if (isFloat(lit)) return 3;
    if (isDouble(lit)) return 4;
    return 5;
}

int	isChar(std::string lit){return (lit.size() == 1 && isprint(lit[0]) != 0 && isdigit(lit[0]) == 0) ? 1 : 0;}

int	isInt(std::string lit){
	long n = strtol(lit.c_str(), NULL, 10);

	if ((int)lit.find_first_not_of("-0123456789") == -1 && (n >= std::numeric_limits<int>::min() && n <= std::numeric_limits<int>::max()))
		return (1);
	return (0);
}

int	isFloat(std::string lit){
	if (floatPseudolits(lit))
		return (1);
	if ((int)lit.find_last_of(".") != -1 && (int)lit.find_last_of("f") != -1){
		if (((int)lit.find_first_not_of("-0123456789.f") == -1 && lit.find(".") == lit.find_last_of(".") && lit.find("f") == lit.find_last_of("f")))
			return (1);
	}
	return (0);
}

int	isDouble(std::string lit){
	if (doublePseudolits(lit))
		return (1);
	if ((int)lit.find_last_of(".") != -1){
		if (((int)lit.find_first_not_of("-0123456789.") == -1&& lit.find(".") == lit.find_last_of(".")))
		return (1);
	}
	return (0);
}

int	floatPseudolits(std::string lit){return(lit.compare("nanf") == 0 || lit.compare("-inff") == 0 || lit.compare("+inff") == 0) ? 1 : 0;}

int	doublePseudolits(std::string lit){return (lit.compare("nan") == 0 || lit.compare("-inf") == 0 || lit.compare("+inf") == 0) ? 1 : 0;}

void printer(char c){
	printChar(c);
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void printer(int i){
	if (i <= std::numeric_limits<char>::min() || i >= std::numeric_limits<char>::max())
		std::cout << "Char: impossible" << std::endl;
	else
		printChar(static_cast<char>(i));
	printInt(i);
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void printer(float f){
	if (f <= std::numeric_limits<char>::min() || f >= std::numeric_limits<char>::max()
		|| f != f)
		std::cout << "Char: impossible" << std::endl;
	else
		printChar(static_cast<char>(f));
	if (f <= std::numeric_limits<int>::min() || f >= std::numeric_limits<int>::max() || f != f)
		std::cout << "Int: impossible" << std::endl;
	else
		printInt(static_cast<int>(f));
	printFloat(f);
	printDouble(static_cast<double>(f));
}

void printer(double d){
	if (d <= std::numeric_limits<char>::min() || d >= std::numeric_limits<char>::max() || d != d)
		std::cout << "Char: impossible" << std::endl;
	else
		printChar(static_cast<char>(d));
	if (d <= std::numeric_limits<int>::min() || d >= std::numeric_limits<int>::max() || d != d)
		std::cout << "Int: impossible" << std::endl;
	else
		printInt(static_cast<int>(d));
	if (d <= std::numeric_limits<float>::min() || d >= std::numeric_limits<float>::max())
		std::cout << "Float: impossible" << std::endl;
	else
		printFloat(static_cast<float>(d));
	printDouble(d);
}