#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <map>

class BitcoinExchange{
    private:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange& operator=(const BitcoinExchange &other);
        
        std::string _file;
        std::map<std::string, double> _data;

    public:
        BitcoinExchange(std::string file);
        ~BitcoinExchange();

        bool goodFile()const ;
        void populateMap();
        void makeExchange();
        bool good_line(std::string line) const;
        bool getDate(std::string &date) const;
        bool getValue(double &value) const;
};