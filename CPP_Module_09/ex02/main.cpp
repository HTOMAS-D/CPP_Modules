#include "PmergeMe.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# include <vector>
# include <iterator>
# include <sys/time.h>
# include <algorithm>
# include <list>


int main(int ac, char **av){
    if (ac < 2){
        std::cout << "Need more arguments for an integer sequence" << std::endl;
        exit(1);
    }
    PmergeMe merger;
    merger.run(ac, av);
}