#include "Harl.hpp"

Harl::Harl(){
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	this->f[0] = &Harl::debug;
	this->f[1] = &Harl::info;
	this->f[2] = &Harl::warning;
	this->f[3] = &Harl::error;

	std::cout << "Harl is here" << std::endl;
}

Harl::~Harl(){
	std::cout << "Harl is gone" << std::endl;
}

// Harl::Harl(std::string level){
// 	this->_level = level;
// }

void Harl::complain(std::string level){
	for(int i = 0; i < 4; i++)
		if(this->_level[i] == level)
			(this->*f[i])();
}

void Harl::debug(void){
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << DEFAULT << std::endl;
}
void Harl::info(void){
	std::cout << GREEN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << DEFAULT << std::endl;
}
void Harl::warning(void){
	std::cout << GREEN << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << DEFAULT << std::endl;
}
void Harl::error(void){
	std::cout << GREEN << "This is unacceptable! I want to speak to the manager now." << DEFAULT << std::endl;
}