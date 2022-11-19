#include "Phonebook.hpp"
#include <iostream>
#include <unistd.h>

Phonebook::Phonebook(){
	this->index = 0;
}

 Phonebook::~Phonebook(){
// 	std::cout << "Destructor called" << std::endl;
}

void Phonebook::add_contact(void){
	std::string holder;
	std::cout << BLUE << "First name: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[index].add_Fname(holder);
	std::cout << BLUE << "Last name: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[index].add_Lname(holder);
	std::cout << BLUE << "Phone number: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[index].add_Numb(holder);
	std::cout << BLUE << "Enter nickname: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[index].add_Nick(holder);
	std::cout << BLUE << "Enter darkest secret: " << DEFAULT;
	getline(std::cin, holder);
	this->_people[index].add_Dsecret(holder);
	if ((this->index + 1) >= 8)
		this->index = 0;
	else
		this->index++;
	std::cout << GREEN << "Contact Information Added 😁" << std::endl;
	sleep(2);
}
