#include "Harl.hpp"

int main(int ac, char **av){
	Harl harl = Harl();
	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "PLEASE WRITE A PROPER HARL COMMAND" << std::endl;
	// harl.complain(av[1]);
	// harl.complain(av[1]);
	// harl.complain(av[1]);
}