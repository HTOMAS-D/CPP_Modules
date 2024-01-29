#include "RPN.hpp"


bool RPN::isOperator(const std::string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}


double RPN::doOP(double operand1, double operand2, const std::string& op) {
    if (op == "+") return operand1 + operand2;
    else if (op == "-") return operand1 - operand2;
    else if (op == "*") return operand1 * operand2;
    else if (op == "/") {
        if (operand2 == 0) {
            std::cout << "Error: Division by zero." << std::endl;
            exit(1);
        }
        return operand1 / operand2;
    }
    return 0.0;
}


void RPN::getRPN(const std::string &string) {
    std::istringstream iss(string);
    std::stack<double> operands;
    std::string token; // Variable to store each token (number or operator) during iteration

    // Loop through each token in the input string
    while (iss >> token) {
        // Check if the token is a number
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            // If it's a number, convert it to a double and push onto the stack
            std::stringstream ss;
            ss << token;
            double value;
            ss >> value;
            operands.push(value);
        } 
        // Check if the token is an operator
        else if (isOperator(token)) {
            // If it's an operator, ensure there are enough operands on the stack
            if (operands.size() < 2) {
                std::cout << "Error: Insufficient operands for operator " << token << std::endl;
                exit(1); // Exit the program with an error status
            }
            double operand2 = operands.top(); operands.pop();
            double operand1 = operands.top(); operands.pop();
            double result = doOP(operand1, operand2, token);
            operands.push(result);
        } 
        // If the token is neither a number nor an operator, it's an error
        else {
            std::cout << "Error" << std::endl;
            exit(1);
        }
    }
    // at the end should onlyu be a value on the stack, if theres more we have an error
    if (operands.size() != 1) {
        std::cout << "Error: Invalid string format" << std::endl;
        exit(1);
    }

    std::cout << "Result: " << operands.top() << std::endl;
    return;
}
