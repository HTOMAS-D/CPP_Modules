#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "random Scavtrap was built" << std::endl;
	this->_name = "Random";
    this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << name <<" was built" << std::endl;
    this->_name = name;
    this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap "<< _name <<" was destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
    *this = other;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now on Gatekeeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target){
    if(_hit_points > 0 && _energy_points > 0)
    {
        _energy_points--;
        std::cout << "ScavTrap " << _name << " attacks " << target << " dealing " <<_attack_damage << " points of damage" << std::endl;
    }
    else
    	std::cout << _name << " is either dead or without energy" << std::endl;

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
