#include <iostream>
#include <string>
#include <fstream>
#include "color.hpp"
#include "cstdlib"

typedef std::string	string;

int main(int ac, char **av){
	if (ac != 4){
		std::cout << RED << "WROND NUMBER OF ARGUMENTS: ./<executable> <filename> <str1> <str2>" << DEFAULT << std::endl;
		exit(1);
	}
	string filename = av[1];
	filename += ".replace";
	string word = av[2];
	string replace = av[3];
	std::ifstream in_file(av[1]);
	if (!in_file.is_open()){
		std::cout << RED << "*FAILED to open input file*" << std::endl;
		exit(2);
	}
	std::ofstream of_file(filename.c_str());
	if (!of_file.is_open()){
		std::cout << RED << "*FAILED to open output file*" << std::endl;
		exit(2);
	}
	string temp;
	while(getline(in_file, temp)){
		int i = 0;
		while (1){
			std::size_t sub = temp.find(av[2], i);
			if (sub != std::string::npos){
				of_file << temp.substr(i, sub - i) << replace;
				i = sub + word.length();
			}
			else
				break;
		}
		of_file << &temp[i] << std::endl;
	}
	in_file.close();
	of_file.close();
	return (0);
}
