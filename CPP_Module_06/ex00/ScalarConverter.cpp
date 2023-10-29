#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    _int = 0;
	_double = 0;
	_float = 0;
	_impossible = false;
	_char = 0;
	_type = NONUMB;
	_numbStr = "";
}

ScalarConverter::ScalarConverter(ScalarConverter &src){
    _int = src._int;
	_double = src._double;
	_float = src._float;
	_char = src._char;
	_impossible = src._impossible;
	_type = src._type;
	_numbStr = src._numbStr;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src){
    if (this == &src)
		return *this;
	this->_int = src._int;
    this->_float = src._float;
	this->_double = src._double;
	this->_char = src._char;
	this->_impossible = src._impossible;
	this->_type = src._type;
	this->_numbStr = src._numbStr;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void    ScalarConverter::get_type(std::string str){
    int i = 0;
	int dot = 0;
	int f = 0;
	int letter = 0;
	int nbr = 0;
    this->setInput(str);

    if (this->isLiteral(this->_numbStr) == true){
		this->setType(ALMOST);
		return;
	}
    while (str[i]){
        if (std::isdigit(str[i]))
            nbr = 1;
        else if (str[i] == '.')
            dot = 1;
        else if (str[i] == 'f' && str[i + 1] == '\0')
            f = 1;
        else if (std::isalpha(str[i]))
            letter = 1;
        i++;
    }
    if (nbr == 1 && dot == 1 && f == 1 && letter == 0) {
        this->setType(FLOAT);
        this->_float = atof(this->_numbStr.c_str());
    }
    else if (nbr == 1 && dot == 1 && f == 0 && letter == 0){
        this->setType(DOUBLE);
        this->_double = atof(this->_numbStr.c_str());
    }
    else if (nbr == 1 && dot == 0 && f == 0 && letter == 0){
        this->setType(INT);
        if (std::atol(this->_numbStr.c_str()) >= INT_MIN && std::atol(this->_numbStr.c_str()) <= INT_MAX) {
			this->_int = std::atoi(this->_numbStr.c_str());
			this->_char = this->_int;
		}
		else
			this->_impossible = true;
    }
	else if (i == 1){
        this->setType(CHAR);
        this->_char = static_cast<char>(*(this->_numbStr.c_str()));
    }
    else 
        this->setType(NONUMB);
}

// syntax of the static_cast: new_type new_variable = static_cast<new_type>(expression);
//  int integerNumber = 42;
// double doubleNumber = static_cast<double>(integerNumber);
// CAREFUL WITH STATIC CAST: since is has less runtime checking than dynamic cast, might fuck up programs (only do it when sure)

void ScalarConverter::convert(const std::string &str){
    this->get_type(str);
    switch(this->getType()){
		case FLOAT:
			this->_char = static_cast<char>(this->_float);
			this->_double = static_cast<double>(this->_float);
			this->_int = static_cast<int>(this->_float);
			break;
		case INT:
			this->_float = static_cast<float>(this->_int);
			this->_char = static_cast<char>(this->_int);
			this->_double = static_cast<double>(this->_int);
			break;
		case DOUBLE:
			this->_char = static_cast<char>(this->_double);
			this->_float = static_cast<float>(this->_double);
			this->_numbStr = static_cast<int>(this->_double);
			break;
		case CHAR:
			this->_int = static_cast<int>(this->_char);
			this->_double = static_cast<double>(this->_char);
			this->_float = static_cast<float>(this->_char);
			break;
		default:
			break;
	}
    this->printer(str);
}

void ScalarConverter::getInt() const {
	std::cout << "int: ";
	if (this->_type == ALMOST || this->_type == NONUMB)
		std::cout << "impossible" << std::endl;
	else if (this->_impossible == true)
		std::cout << "overflow" << std::endl;
	else if (std::atol(this->_numbStr.c_str()) < INT_MIN || std::atol(this->_numbStr.c_str()) > INT_MAX)
		std::cout << "overflow" << std::endl;
	else
		std::cout << this->_int << std::endl;
}

void ScalarConverter::getFloat() const {
	std::cout << "float: ";
	if (this->_type == ALMOST) {
		if (this->_numbStr == "-inf" || this->_numbStr == "+inf" || this->_numbStr == "nan")
			std::cout << this->_numbStr << "f" << std::endl;
		else
			std::cout << this->_numbStr << std::endl;
	}
	else if (this->_type == NONUMB)
		std::cout << "impossible" << std::endl;
	else if (std::atol(this->_numbStr.c_str()) >= INT_MIN && std::atol(this->_numbStr.c_str()) <= INT_MAX){
		std::cout << std::fixed << std::setprecision(1) << this->_float << "f" << std::endl;
	}
	else
		std::cout << this->_numbStr << "f" << std::endl;
}


void ScalarConverter::getChar() const {
	std::cout << "char: ";
	if (_type == ALMOST || _type == NONUMB)
		std::cout << "impossible" << std::endl;
	else if (_char >= 32 && _char <= 126)
		std::cout << "'" << _char << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConverter::getDouble() const {
	std::cout << "double: ";
	if (this->_type == ALMOST) {
		std::cout << convertLiteralToDouble(this->_numbStr) << std::endl;
	}
	else if (this->_type == NONUMB)
		std::cout << "impossible" << std::endl;
	else if (std::atol(this->_numbStr.c_str()) >= INT_MIN && std::atol(this->_numbStr.c_str()) <= INT_MAX){
		std::cout << std::fixed << std::setprecision(1) << this->_double << std::endl;
	}
	else
		std::cout << this->_numbStr << std::endl;
}

bool	hasPeriod(std::string str){
	int l = str.length();
    return (l >= 2 && str[l - 1] == 'f' && str[l - 2] == '.' ? true : false);
}

void ScalarConverter::printer(std::string str) {
	if (str[0] != '.' && str[str.length() - 1] != '.' && !hasPeriod(str)){
 		getChar();
		getInt();
		getFloat();
		getDouble();
	}
	else{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}	
}

int     ScalarConverter::getType(void){return (this->_type);}

void    ScalarConverter::setInput(std::string str){_numbStr = str;}

void    ScalarConverter::setType(int type){this->_type = type;}

bool ScalarConverter::isLiteral(std::string string){return (string == "nan"|| string == "nanf" || string == "+inff" || string == "-inff" || string == "-inf" || string == "+inf" ? true : false);}

std::string convertLiteralToDouble(std::string string){
	if (string == "nanf")
		return "nan";
	else if (string == "+inff")
		return "+inf";
	else if (string == "-inff")
		return "-inf";
	return string;
}