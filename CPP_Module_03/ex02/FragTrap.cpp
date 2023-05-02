#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Random FragTrap was built" << std::endl;
	this->_name = "Random";
	this->_attack_damage = 30;
	this->_energy_points = 100;
	this->_hit_points = 100;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << name <<" was built" << std::endl;
	this->_name = name;
	this->_attack_damage = 30;
	this->_energy_points = 100;
	this->_hit_points = 100;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
}

FragTrap::~FragTrap(){
	std::cout << "Fragtrap " << _name << " was destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other){
	std::cout << "FragTrap assignation operator caller" << std::endl;
	if(this != &other)
	{
		this->_name = other._name;
		this->_energy_points = other._energy_points;
		this->_hit_points = other._hit_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << _name << " high fives everyone" << std::endl;
}