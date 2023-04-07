#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	_name = "random claptrap";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap" << _name << "has died" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){

}