#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Randonm Animal";
}

Animal::Animal(Animal const &copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal deconstructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &copy){
	type = copy.type;
	return *this;
}

std::string Animal::getType(){
	return this->type;
}
