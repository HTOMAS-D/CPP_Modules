#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T *a, int len, void(*function)(T const &t)){
    for(int i = 0; i < len; i++)
        function(a[i]);
}

template <typename T>
void squared(const T &a){std::cout << (a * a) << std::endl;}

template <typename T>
void printer(const T &a){std::cout << a << std::endl;}

#endif
