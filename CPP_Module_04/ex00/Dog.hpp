#ifndef DOG_HPP
#define DOG_HPP
// #include <cstring>
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	// protected:
	// 	std::string type;
	public:
		Dog();						//canonical
		~Dog();						//canonical
		Dog(Dog const &copy);		//canonical

		Dog &operator=(Dog const &other);		//canonical

		std::string getType() const;
		void makeSound() const;
};

#endif