#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}


void PmergeMe::checkArgs(){
    for(int i = 1; _av[i]; i++){
        // std::cout << _av[i] << std::endl;
        for(int j = 0; _av[i][j]; j++){
            if(!std::isdigit(_av[i][j])){
                // std::cout << _av[i] << std::endl;
                std::cout << "Not a valid value" << std::endl;
                exit(1);
            }
        }
    }
}


void PmergeMe::makeContainers(){
    for(int i = 1; i < _ac; i++){
        int num = std::atoi(_av[i]);
        if (num <= 0){
            std::cout << "Invalid negative value." << std::endl;
            exit(1);
        }
        _vector.push_back(num);
        _list.push_back(num);
    }
}


void PmergeMe::printer(int flag){
    if(!flag)
        std::cout << "Before: ";
    else
        std::cout << "After: ";
    for(int i = 0; i < _vector.size(); i++)
}


void PmergeMe::run(int ac, char **av){
    _av = av;
    _ac = ac;
    std::cout << "on run with "<< ac << std::endl;
    this->checkArgs();
    
}