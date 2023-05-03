#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "Randonm WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal deconstructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &copy){
	if(this != &copy)	
		this->type = copy.type;
	return *this;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

void WrongAnimal::makeSound() const{
	std::cout << "Random animal sound" << std::endl;
}
