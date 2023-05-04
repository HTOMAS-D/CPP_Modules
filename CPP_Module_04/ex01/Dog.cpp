#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
	this->type = "Randonm Dog";
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog deconstructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &copy){
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string Dog::getType() const{
	return this->type;
}

void Dog::makeSound() const{
	std::cout << "Random Dog 🐕 sound" << std::endl;
}

