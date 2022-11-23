#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce (void);
		void set_name(std::string);

	private:
		std::string _name;
};

Zombie *zombieHorde(int n,  std::string name);

#endif /*ZOMBIE_H*/