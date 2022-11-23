#include <iostream>
#include <string.h>

/*******COLORS*******/
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define DEFAULT "\033[0m"

int main(){
	std::string str = "HI THIS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << GREEN << "Memory address of str: " << DEFAULT << &str << std::endl;
	std::cout << GREEN << "Memory address held by stringPTR: " << DEFAULT << stringPTR << std::endl;
	std::cout << GREEN << "Memory address held by stringREF: " << DEFAULT << &stringREF << std::endl;
	std::cout <<std::endl;
	std::cout << GREEN << "Value of the str: " << DEFAULT << str << std::endl;
	std::cout << GREEN << "Value pointed to by stringPTR: " << DEFAULT << *stringPTR << std::endl;
	std::cout << GREEN << "Value pointed to by stringREF: " << DEFAULT << stringREF << std::endl;
}