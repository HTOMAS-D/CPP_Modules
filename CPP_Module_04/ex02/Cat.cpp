#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Randonm Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat& Cat::operator=(Cat const &copy){
	if (this != &copy)
		this->type = copy.type;
		delete this->_brain;
		this->_brain = copy._brain;
	return *this;
}

std::string Cat::getType() const{
	return this->type;
}

void Cat::makeSound() const{
	std::cout << "Random Cat 🐈 sound" << std::endl;
}
