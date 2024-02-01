#include "easyfind.hpp"
#include <vector>

int main(){
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);


    try{
    // easyfind(numbers, 5);
    std::cout << easyfind(numbers, 5) << std::endl;
    easyfind(numbers, 6);
    }
    catch(std::exception & e){
        ;
    }
}