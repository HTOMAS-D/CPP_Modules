#include "Span.hpp"

Span::Span(unsigned int N): _N(N){}

Span::Span(Span const &copy){
    _N = copy._N;
    _array = copy._array;
}

Span &Span::operator=(Span const &copy){
    _N = copy._N;
    _array = copy._array;
    return (*this);
}

Span::~Span(){}

void Span::addNumber(int numb){
    if(_array.size() < _N)
        _array.push_back(numb);
    else
        throw std::exception();
}

int Span::shortestSpan()const{
    if(_array.size() < 2)
        throw std::exception();

    std::vector<int> sortedArray = _array;
    std::sort(sortedArray.begin(), sortedArray.end());

    int minSpan = std::numeric_limits<int>::max(); // MAX INT to store value
    for (size_t i = 1; i < sortedArray.size(); ++i) {
        minSpan = std::min(minSpan, sortedArray[i] - sortedArray[i - 1]); // min compares the difference between the 2 values and stores the smaller one on the  minSpan variable.
    }
    return minSpan;
}

int Span::longestSpan()const{
    if (_array.size() < 2) {
        throw std::logic_error("Cannot find span with less than two elements.");
    }
    std::vector<int> sortedArray = _array;
    std::sort(sortedArray.begin(), sortedArray.end());

    return sortedArray.back() - sortedArray.front();
}


void Span::addRange(int start, int end){
    if(_array.size() + (end - start + 1) > _N) // +1 to include the end number
        throw std::exception();
    if(end - start == 0)
        throw::std::exception();
    else if(end - start < 0){
        for (int i = end; i <= start; ++i) {
            _array.push_back(i);
        }
    }
    else{
        for (int i = start; i <= end; ++i) {
           _array.push_back(i);
        }
    }
}