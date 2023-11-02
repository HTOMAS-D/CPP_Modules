#include "iter.hpp"

int main(){
   int int_array[5] = {1, 2, 3, 4, 5};
    std::string string_array[5] = {"lets", "fucking", "go"};
    float float_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << std::endl;
    std::cout << "int_array iterated with the print function: ";
    ::iter(int_array, 5, printer);
    std::cout << std::endl << std::endl;

    std::cout << "string_array iterated with the printer function: ";
    ::iter(string_array, 5, printer);
    std::cout << std::endl << std::endl;

    std::cout << "float_array iterated with the printer function: ";
    ::iter(float_array, 5, printer);
    std::cout << std::endl << std::endl;

    std::cout << "int_array iterated with the squared function: ";
    ::iter(int_array, 5, squared);
    std::cout << std::endl << std::endl;

    std::cout << "float_array iterated with the squared function: ";
    ::iter(float_array, 5, squared);
    std::cout << std::endl << std::endl;

    return (0); 
}