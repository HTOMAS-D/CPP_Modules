#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(std::string level){}

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