#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){std::cout << "default ScalarConverter constructor called" << std::endl;}
ScalarConverter::~ScalarConverter(){std::cout << "Scalar converter destroyed" << std::endl;}

ScalarConverter::ScalarConverter(ScalarConverter const & copy){
    (void) copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const & copy){
    (void) copy;
    return *this;
}

//GETTERS AND SETTERS

void ScalarConverter::setType(std::string value){
    this->_numberStr = value;
    this->_isLiteral = this->checkLiteral(value);
    int i = -1;

    while(value[++i]){
        if (std::isdigit(value[i]))
            this->_digit = true;
        else if(value[i] == 'f' && value[i + 1] == '\0')
            this->_f = true;
        else if(std::isalpha(value[i]))
            this->_letter = true;
        else if(value[i] == '.')
            this->_dot = true;
    }
    if (this->_digit && this->_dot && this->_f && !this->_letter){
        this->_type = "float";
        this->_float = std::stof(value);
    }
    else if (this->_digit && this->_dot && !this->_f && !this->_letter){
        this->_type = "double";
        this->_double = std::stod(value);
    }
    else if (this->_digit && !this->_dot && !this->_f && !this->_letter){
        this->_type = "int";
        if((std::stol(value)) < INT_MIN || (std::stol(value)) > INT_MAX)
            this->_impossible = true;
        else
            this->_int = std::stoi(value);
    }
    else if (i == 1){
        this->_type = "char";
        this->_char = static_cast<char>(value[0]);
    }
    else
        this->_impossible=true;


}

//CHECKERS

bool checkLiteral(std::string value){
    if(value == "-inff" | value == "+inff" | value == "nanf" | value == "-inf" | value == "+inf" | value == "nan")
        return true;
    return false;
}

//CONVERTERS

void ScalarConverter::convert(std::string value){
    this->setType(value);
}