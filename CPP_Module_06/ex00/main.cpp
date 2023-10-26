#include "ScalarConverter.hpp"

int main(int ac, char** av) {
    ScalarConverter converter;
    if(ac == 2){
        converter.convert(av[1]);
    }
    return 0;
}