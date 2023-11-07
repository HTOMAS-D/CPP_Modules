#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span{
    private:
        const unsigned int _N;
        std::vector<int> _array;

    public:
        Span(unsigned int N);
        ~Span();
        Span(Span const &copy);
        Span &operator=(Span const &copy);

        void addNumber(int numb); //needs to throw exception
        int shortestSpan()const;
        int longestSpan()const;

};


#endif