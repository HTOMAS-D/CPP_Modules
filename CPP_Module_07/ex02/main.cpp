#include "Array.hpp"

int main() {
    // Create an array with 5 integer elements
    Array<int> intArray(5);

    // Fill the array with values
    for (unsigned int i = 0; i < intArray.size(); i++) {
        intArray[i] = i * 10;
    }

    // Display the array contents
    std::cout << "Integer Array: ";
    for (unsigned int i = 0; i < intArray.size() + 1; i++) {
        try {
            std::cout << intArray[i] << std::endl;
        } 
        catch (const std::exception& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    
    
    // STRINGSSSS
    Array<std::string> stringArray(3);

    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "C++";

    // Display the string array contents
    std::cout << "String Array: ";
    for (unsigned int i = 0; i < stringArray.size() + 1; i++) {
        try {
        std::cout << stringArray[i] << std::endl;
        } 
        catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
    std::cout << std::endl;

    return 0;
}
