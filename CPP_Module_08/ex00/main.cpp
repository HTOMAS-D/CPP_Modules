#include "easyfind.hpp"
#include <vector>

int main(){
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);


    easyfind(numbers, 5);
    std::cout << std::endl;
    easyfind(numbers, 6);
}