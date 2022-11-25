#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name): _nameB(name){
//	std::cout << this->_nameB << " was born" << std::endl;
}
HumanB::~HumanB(){
//	std::cout << this->_nameB << " Died" << std::endl;
}
void HumanB::attack(void){
	std::cout << this->_nameB << " attacks with their " << this->_weaponB->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon &whatever){
	this->_weaponB = &whatever;
}