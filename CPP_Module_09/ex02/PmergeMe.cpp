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
        _vector.push_back(num);
        _list.push_back(num);
    }
}


void PmergeMe::printer(int flag){
    if(!flag)
        std::cout << "Before: ";
    else
        std::cout << "After: ";
    for(size_t i = 0; i < _vector.size(); i++){
        std::cout << _vector[i] << " ";
    }
    std::cout << std::endl;
}


long double PmergeMe::getTime(){
    timeval tv;

    gettimeofday(&tv, NULL);
	unsigned long value = tv.tv_usec*(u_int64_t)1000000+tv.tv_usec;
    return value  / 1000000;
}


std::vector<int> PmergeMe::merge(const std::vector<int>& left, const std::vector<int>& right){
    std::vector<int> result(left.size() + right.size());
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) 
            result[k] = left[i++];
		else 
            result[k] = right[j++];
        k++;
    }
    while (i < left.size()) 
        result[k++] = left[i++];
    while (j < right.size())
        result[k++] = right[j++];
   return result;
}


std::vector<int> PmergeMe::mergeVec(std::vector<int> &v)
{
	if (v.size() == 1)
        return v;
    int mid = v.size() / 2;
    std::vector<int> left(v.begin(), v.begin() + mid);
    std::vector<int> right(v.begin() + mid, v.end());
	left = mergeVec(left);
    right = mergeVec(right);
	return merge(left, right);
}


std::list<int> PmergeMe::mergeList(std::list<int> &lst)
{
	if (lst.size() == 1)
        return lst;
    std::list<int>::iterator it = lst.begin();
    std::advance(it, lst.size() / 2);
    std::list<int> left(lst.begin(), it);
    std::list<int> right(it, lst.end());
    left = mergeList(left);
    right = mergeList(right);
	return merge(left, right);
}



std::list<int> PmergeMe::merge(const std::list<int>& left, const std::list<int>& right)
{
    std::list<int> result;
    std::list<int>::const_iterator it_left = left.begin();
    std::list<int>::const_iterator it_right = right.begin();
    while (it_left != left.end() && it_right != right.end())
    {
        if (*it_left <= *it_right)
            result.push_back(*it_left++);
        else
            result.push_back(*it_right++);
    }
    while (it_left != left.end())
        result.push_back(*it_left++);
    while (it_right != right.end())
        result.push_back(*it_right++);
    return result;
}



void PmergeMe::run(int ac, char **av){
    _av = av;
    _ac = ac;
    std::cout << "on run with "<< ac << std::endl;
    this->checkArgs();
    this->makeContainers();
    this->printer(0);

    long double vec = this->getTime();
    std::cout << "vec: " << vec << std::endl;

    _vector = this->mergeVec(_vector);
    vec = this->getTime() - vec;
    printer(1);
    std::cout << "Time to process a range of " << _vector.size() << " with std::vector : "<< vec << "µs\n";
    long double listTime = this->getTime();
    _list = this->mergeList(_list);
    listTime = this->getTime() - listTime;
    std::cout << "Time to process a range of " << _vector.size() << " with std::list : "<< listTime << "µs\n";
}