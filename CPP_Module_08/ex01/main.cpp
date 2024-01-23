#include "Span.hpp"
#include <iostream>

int main() {
    try {
        Span sp = Span(5);
        Span sa = Span(4);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span (sp): " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span (sp): " << sp.longestSpan() << std::endl;

        sa.addRange(3, 8);

        std::cout << "Shortest span (sa): " << sa.shortestSpan() << std::endl;
        std::cout << "Longest span (sa): " << sa.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
