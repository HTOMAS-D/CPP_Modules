#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span{
    private:
        unsigned int _N;
        std::vector<int> _array;
        Span();

    public:
        Span(unsigned int N);
        ~Span();
        Span(Span const &copy);
        Span &operator=(Span const &copy);

        void addNumber(int numb);
        int shortestSpan()const;
        int longestSpan()const;
  
        void addRange(int start, int end);
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};


#endif