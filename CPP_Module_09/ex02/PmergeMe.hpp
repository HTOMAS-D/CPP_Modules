#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <sys/time.h>

class PmergeMe{
    private:
        PmergeMe(const PmergeMe &other);
        const PmergeMe& operator=(const PmergeMe &other);
        int _ac;
        char **_av;
        std::vector<int> _vector;
        std::vector<int> _vectorDone;
        std::list<int> _list;

    public:
        PmergeMe();
        ~PmergeMe();
        void run(int ac, char** av);
        void checkArgs();
        void makeContainers();
        void printer(int flag);
        long double getTime();

        std::vector<int> mergeVec(std::vector<int> &v);
        std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right);

        std::list<int> mergeList(std::list<int> &lst);
        std::list<int> merge(const std::list<int>& left, const std::list<int>& right);


};