#ifndef ANIMAL_HPP
#define ANIMAL_HPP
// #include <cstring>
#include <iostream>
#include "Brain.hpp"

class Animal{
	protected:
		std::string type;
	public:
		Animal();						//canonical
		virtual ~Animal();						//canonical
		Animal(Animal const &copy);		//canonical

		Animal &operator=(Animal const &other);		//canonical

		std::string getType()const;
		virtual void makeSound()const = 0; //making it a pure virtual class its therefore abstract, so it cant be instaciated
};

#endif