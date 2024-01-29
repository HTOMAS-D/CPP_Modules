#pragma once
#include <iostream>
#include <list>
#include <vector>

class PmergeMe{
    private:
        PmergeMe(const PmergeMe &other);
        const PmergeMe& operator=(const PmergeMe &other);
        int _ac;
        char **_av;
        std::vector<int> _vector;
        std::list<int> _list;

    public:
        PmergeMe();
        ~PmergeMe();
        void run(int ac, char** av);
        void checkArgs();
        void makeContainers();
        void printer(int flag);
};