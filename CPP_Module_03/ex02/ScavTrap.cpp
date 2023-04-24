#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "random Scavtrap was built" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "random Scavtrap was destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->_name = name;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now on Gatekeeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
    std::cout << "ScavTrap assignation operator called." << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hit_points = other._hit_points;
        this->_energy_points = other._energy_points;
        this->_attack_damage = other._attack_damage;
    }
    return *this;
}