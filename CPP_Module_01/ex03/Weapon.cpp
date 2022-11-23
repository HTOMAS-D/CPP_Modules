#include "Weapon.hpp"


Weapon::Weapon(std::string name){
	this->_type = name;
	std::cout << this->_type << " was created" << std::endl;
}
Weapon::~Weapon(){
	std::cout << this->_type << " was destroyed" << std::endl;
}

void Weapon::setType(std::string type){
	this->_type = type;
	std::cout << "Weapon created" << std::endl;
}

std::string& Weapon::getType(void){
	std::string &ref = this->_type;
	return (ref);
}