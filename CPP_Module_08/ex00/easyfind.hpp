#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template <typename T>
int easyfind(const T  &type, int numb){
    for(typename T::size_type i = 0; i < type.size(); i++){
        if(type[i] == numb){
            std::cout << "found value on index: " << i << std::endl;
            return 0;
        }
    }
    std::cout << "coudln't find value inside the container" << std::endl;
    return 1;
}


#endif