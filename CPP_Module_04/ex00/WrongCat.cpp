#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "Randonm WrongCat";
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat deconstructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &copy){
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string WrongCat::getType() const{
	return this->type;
}

void WrongCat::makeSound() const{
	std::cout << "Random WrongCat 🐈 sound" << std::endl;
}
