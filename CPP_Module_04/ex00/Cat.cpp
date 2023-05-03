#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Randonm Cat";
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat& Cat::operator=(Cat const &copy){
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string Cat::getType() const{
	return this->type;
}

void Cat::makeSound() const{
	std::cout << "Random Cat 🐈 sound" << std::endl;
}
