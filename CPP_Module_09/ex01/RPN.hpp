#pragma once
#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN{
    private:
    public:
        static void getRPN(const std::string& expression);
        static double doOP(double operand1, double operand2, const std::string& op);
        static bool isOperator(const std::string &token);
};