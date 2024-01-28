#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file){
    // std::cout << file << std::endl;
    _file = file;
    if (!this->goodFile()){
        std::cout << "Error opening the input file: "<< file << std::endl;
        exit(1);
    }
    this->populateMap();
    this->makeExchange();
}

BitcoinExchange::~BitcoinExchange(){}


bool BitcoinExchange::goodFile()const {
    std::ifstream filename(_file.c_str());
    return (filename.good() ? true : false);
}

void BitcoinExchange::populateMap(){
    std::ifstream db("data.csv");
    std::string line;
    std::getline(db, line);
    // std::cout << line << std::endl;
    while(std::getline(db, line)){
        std::string date = line.substr(0, line.find(","));
        double rate = std::atof(line.substr(line.find(",") + 1).c_str());
        _data[date] = rate;
        // std::cout << _data[date] << std::endl;
    }
}

bool BitcoinExchange::good_line(std::string line) const{

    if (line.length() < 14 && !isdigit(line[14]))
		return false;
	for (size_t i = 0; i < line.length(); i++) {
		if(!isdigit(line[i]) && line[i] != '-' && line[i] != ' ' && line[i] != '|' && line[i] != '.'  ){
			std::cout << "Error: bad input => " << line << std::endl;
			return false;
		}
	}
	return true;
}

bool BitcoinExchange::getValue(double &value) const {return (value < 0 || value > 1000);}

bool BitcoinExchange::getDate(std::string &date) const{
    int y, m, d;
	y = std::atoi(date.substr(0,date.find("-")).c_str());
	m = std::atoi(date.substr(date.find("-") +1 ,2).c_str());
	d = std::atoi(date.substr(8).c_str());
	if ( y > 2023 || y < 0 || m <= 0 || m > 12 || d <= 0 || d > 31 || date[4] != '-' || date[7] != '-'){
		std::cout << "Error: bad input => " << date << std::endl;
		return(1);
	}
	return(0);
}


void BitcoinExchange::makeExchange(){
    std::ifstream input(_file);
    std::string line;
    std::getline(input, line);

    while(std::getline(input, line)){
        if(!good_line(line)){
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, line.find("|") -1);
        double numb = std::atof(line.substr(line.find("|") + 1).c_str());
        if (this->getValue(numb)){
            std::cout << "Error: bad or out of bounds value." << std::endl;
            continue;
        }
        else if(this->getDate(date)){
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        std::map<std::string, double>::iterator it = _data.find(date);
    	if (it == _data.end()){
            it = _data.lower_bound(date);
            if (it != _data.begin()) 
                --it;
		}
		std::cout << date << " => "<< it->second * numb << "\n";
    }
}