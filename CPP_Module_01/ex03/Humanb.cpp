#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_nameB = name;
	std::coud << this->_nameB << " was born" << std::endl;
}
HumanB::~HumanB(){
	std::cout << this->_nameB << " Died" << std::endl;
}
void HumanB::attack(void){
	std::cout << this->_nameB << " attacks with their" << this->_weaponB.gettype() <<std::endl;
}