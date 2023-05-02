#ifndef ANIMAL_HPP
#define ANIMAL_HPP
// #include <cstring>
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(Animal const &copy);

		Animal &operator=(Animal const &other);

};

#endif