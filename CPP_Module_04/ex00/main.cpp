#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


// using virtual methods you can make so that you can override the base class function with the function that is derived:
// An Animal pointer can point to a Cat (a function that inherits from it), if we use makesound() it will output the Cat sound.
// if i dont use a virtual function it will output the animal sound despite being pointed to an Animal

// 2 examples of this below

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound!
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;

	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* i = new WrongCat();
	// std::cout << i->getType() << " " << std::endl; //will output the cat sound!
	// i->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete i;
	// return 0;

	
}