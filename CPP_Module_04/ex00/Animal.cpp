#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Randonm Animal";
}

Animal& Animal::operator=(Animal const &copy){
	type = copy.type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal deconstructor called" << std::endl;
}
