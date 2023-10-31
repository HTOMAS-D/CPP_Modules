#include "ScalarConverter.hpp"

int main(int ac, char** av) {
    ScalarConverter converter;
    bool islit = ScalarConverter::isLiteral(av[1]);
    (void) islit;
    if(ac == 2){
        converter.convert(av[1]);
    }
    return 0;
}