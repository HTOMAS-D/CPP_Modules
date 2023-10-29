#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <climits>

#define CHAR 1
#define FLOAT 2
#define DOUBLE 3
#define INT 4
#define NONUMB 5
#define ALMOST 6

class ScalarConverter {
    private:
        std::string _numbStr;
        int  _type;
        char _char;
        int _int;
        float _float;
        double _double;
        bool _impossible;

    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter &src);
        ScalarConverter &operator=(ScalarConverter const &src);
        ~ScalarConverter();
        void    convert(const std::string &std);
        void    get_type(std::string str);
        void    setInput(std::string str);
        void    getInt() const;
        void    getFloat() const;
        void    getChar() const;
        void    getDouble() const;
        void    printer(std::string str);
        void    setType(int type);
        int     getType(void); 
        static bool        isLiteral(std::string str);
};

std::string convertLiteralToDouble(std::string str);

#endif