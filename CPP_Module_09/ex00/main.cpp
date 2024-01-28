#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if(ac != 2){
        std::cout << "Program needs to have an argument, no more, no less" << std::endl;
        exit(1);
    }
    BitcoinExchange exchanger(av[1]);
}