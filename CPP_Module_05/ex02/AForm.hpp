#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{

	private:
		const std::string _name;
		bool _signed;
		const int _toSign;
		const int _toExecute;

	public:

		AForm(); //done
		AForm(std::string name, int toSign, int toExecute); //done
		AForm(AForm const &copy); //done
		virtual ~AForm(); //done

		AForm & operator=(AForm const &copy);

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
		class GradeTooHighExceptionExecute : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowExceptionExecute: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

		void beSigned(Bureaucrat& bur); //done
		virtual void execute(Bureaucrat const & bur) const = 0;
		bool checkperm(Bureaucrat const & bur) const;
};

std::ostream& operator <<(std::ostream &os, const AForm& Aform); //done

#endif