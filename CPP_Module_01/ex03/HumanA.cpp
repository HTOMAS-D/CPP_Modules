#include "HumanA.hpp"

Human_A::Human_A(std::string name, Weapon _weapA){
	this->_nameA = name;
	this->_weaponA = _weapA;
	std::cout << this->_nameA << "was born" << std::endl;
}

Human_A::~Human_A(){
	std::cout << this->_nameA << "DIED" << std::endl;
}