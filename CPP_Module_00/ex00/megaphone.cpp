#include <iostream>
#include <stdlib.h>
#include <string>

int main(int ac, char **av){
	std::string	str;
	int i = 0;
	int j;

	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else 
		while (++i < ac)
		{
			j = -1;
			str = av[i];
			while(str[++j])
				std::cout << (char) std::toupper(str[j]);
			if((i + 1) < ac)
				std::cout << " ";
		}
	std::cout << std::endl;
	return (0);
}