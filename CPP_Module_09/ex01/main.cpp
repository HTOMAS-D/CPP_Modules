#include "RPN.hpp"


int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: " << av[0] << " <inverted_polish_expression>" << std::endl;
        exit(1);
    }
    std::string rpn = av[1];
    RPN::getRPN(rpn);
}



// in the case  ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"


// Push 8 onto the stack:

// Stack: 8
// Push 9 onto the stack:

// Stack: 8, 9
// Apply * (multiplication):

// Pop 9 and 8, calculate 8 * 9 = 72
// Push 72 onto the stack: Stack: 72
// Push 9 onto the stack:

// Stack: 72, 9
// Apply - (subtraction):

// Pop 9 and 72, calculate 72 - 9 = 63
// Push 63 onto the stack: Stack: 63
// Push 9 onto the stack:

// Stack: 63, 9
// Apply - (subtraction):

// Pop 9 and 63, calculate 63 - 9 = 54
// Push 54 onto the stack: Stack: 54
// Push 9 onto the stack:

// Stack: 54, 9
// Apply - (subtraction):

// Pop 9 and 54, calculate 54 - 9 = 45
// Push 45 onto the stack: Stack: 45
// Push 4 onto the stack:

// Stack: 45, 4
// Apply - (subtraction):

// Pop 4 and 45, calculate 45 - 4 = 41
// Push 41 onto the stack: Stack: 41
// Push 1 onto the stack:

// Stack: 41, 1
// Apply + (addition):

// Pop 1 and 41, calculate 41 + 1 = 42
// Push 42 onto the stack: Stack: 42