#include <iostream>
#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){
//	std::cout << "Destructor called" << std::endl;
}

void Contact::add_Fname(std::string fname){
	this->_Fname = fname;
}
void Contact::add_Lname(std::string lname){
	this->_Lname = lname;
}
void Contact::add_Numb(std::string Numb){
	this->_Numb = Numb;
}
void Contact::add_Nick(std::string Nick){
	this->_Nick = Nick;
}
void Contact::add_Dsecret(std::string Dsecret){
	this->_Dsecret = Dsecret;
}
std::string Contact::get_Fname(void){
	return this->_Fname;
}
std::string Contact::get_Lname(void){
	return this->_Lname;
}
std::string Contact::get_Nick(void){
	return this->_Nick;
}
std::string Contact::get_Numb(void){
	return this->_Numb;
}
std::string Contact::get_Dsecret(void){
	return this->_Dsecret;
}