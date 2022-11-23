#include "Zombie.hpp"

int main(){
	Zombie *zomb = zombieHorde(3, "Ricky");
	delete [] zomb;
	return 0;
}