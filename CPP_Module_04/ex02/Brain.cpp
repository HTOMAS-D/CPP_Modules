#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &other){
	if (this != &other)
		*this = other;
}

Brain &Brain::operator=(Brain const &other){
	if (this != &other)
		*this = other;
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain Deconstructor called" << std::endl;
}