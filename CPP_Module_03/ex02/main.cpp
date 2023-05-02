#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	// ScavTrap ricky("ricky");
	FragTrap rico;

	// ricky.attack("target");
	// ricky.takeDamage(10);
	// ricky.beRepaired(10);
	// ricky.guardGate();
	rico.attack("target");
	rico.takeDamage(10);
	rico.beRepaired(5);
	rico.highFivesGuys();
	return (0);
}