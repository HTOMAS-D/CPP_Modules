#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

	private:
		const std::string _name;
		bool _signed;
		const int _toSign;
		const int _toExecute;

	public:

		Form(); //done
		Form(std::string name, int toSign, int toExecute); //done
		Form(Form const &copy); //done
		~Form(); //done

		Form & operator=(Form const &copy);

		//getters
		int getToSign() const; //done
		int getToExecute() const; //done
		bool isSigned() const; //done
		std::string getName() const; //done

		class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

		void beSigned(Bureaucrat& bur); //done
};

std::ostream& operator <<(std::ostream &os, const Form& form); //done

#endif