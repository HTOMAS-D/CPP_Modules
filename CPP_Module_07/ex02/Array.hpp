#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

template <typename T>
class Array {
private:
    T* _array;
    unsigned int _size;

public:
    Array() : _size(0), _array(nullptr) {
    }

    Array(unsigned int n) : _size(n) {
        _array = new T[_size]();
    }

    Array(const Array& copy) : _size(copy._size), _array(new T[copy._size]) {
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = copy._array[i];
        }
    }

    Array& operator=(const Array& copy) {
        if (this != &copy) {
            if (_array) {
                delete[] _array;
            }
            _size = copy._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = copy._array[i];
            }
        }
        return *this;
    }

    T& operator[](unsigned int index) {
        if(index >=_size){
            throw std::exception();
        }
        return _array[index];
    }

    unsigned int size() const {
        return _size;
    }

    ~Array() {
        delete[] _array;
    }
};

#endif
