#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name){
	Zombie *a = new Zombie[n];
	for (int i = 0; i < n; i++){
		a[i].set_name(name);
		a[i].announce();
	}
	return (a);
}