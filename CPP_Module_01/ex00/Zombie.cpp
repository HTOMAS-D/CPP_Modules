#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	this->announce();
}

Zombie::Zombie(void){}

Zombie::~Zombie(void){
	std::cout << this->_name << ": I JUST DIED 💀" << std::endl;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}