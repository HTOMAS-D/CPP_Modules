#include "HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name, Weapon _weapA): _nameA(name), _weaponA(_weapA){
//	std::cout << this->_nameA << " was born" << std::endl;
}

HumanA::~HumanA(){
//	std::cout << this->_nameA << "DIED" << std::endl;
}

void HumanA::attack(void){
	std::cout << this->_nameA << " attacks with their " << this->_weaponA.getType() << std::endl;
}