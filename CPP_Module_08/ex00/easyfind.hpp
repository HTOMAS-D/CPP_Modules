#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template <typename T>
int easyfind(T  &type, int numb){
    // for(typename T::size_type i = 0; i < type.size(); i++){
    //     if(type[i] == numb){
    //         std::cout << "found value on index: " << i << std::endl;
    //         return 0;
    //     }
    // }
    typename T::iterator it = std::find(type.begin(), type.end(), numb);
    if(it == type.end()){
        std::cout << "couldn't find value inside the container" << std::endl;
        throw std::exception();    
    }
    
    return *it;
}


#endif