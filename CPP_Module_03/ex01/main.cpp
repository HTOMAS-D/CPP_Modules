#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	// ClapTrap henrique("Henrique");
	ScavTrap merdas("merdas");

	// henrique.attack("oscar");
	merdas.attack("henrique");
	merdas.guardGate();
	merdas.beRepaired(4);
	merdas.takeDamage(10);
	merdas.takeDamage(100);
	merdas.takeDamage(10);
	// henrique.takeDamage(20);
	// henrique.attack("oscar");
}