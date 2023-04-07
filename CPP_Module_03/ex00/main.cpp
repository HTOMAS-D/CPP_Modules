#include "ClapTrap.hpp"

int main(){
	ClapTrap oscar;
	ClapTrap henrique("Henrique");

	// henrique.attack("oscar");
	// oscar.attack("henrique");
	henrique.beRepaired(4);
	henrique.takeDamage(20);
	henrique.attack("oscar");
}