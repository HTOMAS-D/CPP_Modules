#ifndef ANIMAL_HPP
#define ANIMAL_HPP
// #include <cstring>
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();						//canonical
		virtual~Animal();						//canonical
		Animal(Animal const &copy);		//canonical

		Animal &operator=(Animal const &other);		//canonical

		std::string getType() const;
		virtual void makeSound() const;
};

#endif