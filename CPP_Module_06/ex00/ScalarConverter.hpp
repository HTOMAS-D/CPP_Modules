#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <climits>

class ScalarConverter{
    private:
        std::string _numberStr;
        bool _isLiteral;
        bool _digit;
        bool _letter;
        bool _dot;
        bool _f;
        std::string _type;
        bool _impossible;
        
        float _float;
        double _double;
        int _int;
        char _char;

    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(ScalarConverter const & copy);
        ScalarConverter &operator=(ScalarConverter const & copy);
        
        //GETTERS 
        void setType(std::string value);

        //CHECKERS
        bool checkLiteral(std::string value);

        //CONVERTERS
        void convert(std::string value);
};

#endif
