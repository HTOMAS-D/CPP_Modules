#include "PmergeMe.hpp"

int main(int ac, char **av){
    if (ac < 2){
        std::cout << "Need more arguments for an integer sequence" << std::endl;
        exit(1);
    }
    PmergeMe merger;
    merger.run(ac, av);
}