#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>


class Form{

	private:
		const std::string _name;
		bool _signed;
		const int _toSign;
		const int _toExecute;

	public:
		Form(/* args */);
		~Form();
		Form::Form(/* args */)
};

#endif