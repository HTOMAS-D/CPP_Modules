#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	_name = "random ClapTrap";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "random claptrap was built" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << _name << " was built" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap " << _name << " has died" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if(_energy_points <= 0 || _hit_points <= 0){
		std::cout << _name << " is either dead or without energy" << std::endl;
		return;
	}
	else{
		_energy_points--;
		std::cout << _name << " attacks " << target << " dealing " << _attack_damage << " points of damage" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if(!_energy_points || !_hit_points){
		std::cout << _name << " is either dead or without energy" << std::endl;
		return;
	}
	else{
		_energy_points--;
		_hit_points += amount;
		std::cout << _name << " repaired itself for " << amount << " points of health" << std::endl;
	}

}

void ClapTrap::takeDamage(unsigned int amount){
	if(_hit_points <= 0){
		std::cout << _name << " is already dead" << std::endl;
		return;
	}
	else{
		_hit_points = _hit_points - (int)amount;
		std::cout << _name << " took " << amount << " points of damage" << std::endl;
	}
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other){
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return *this;
}