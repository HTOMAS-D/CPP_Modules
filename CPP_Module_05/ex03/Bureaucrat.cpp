#include "Bureaucrat.hpp"
#include "AForm.hpp"


// CONSTRUCTORS AND DECONST

Bureaucrat::Bureaucrat(){
	std::cout << "Random bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
	try{
		if(grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if(grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch(std::exception & e){
		std::cout << "Exception " << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs) : _name(rhs._name), _grade(rhs._grade){}

Bureaucrat::~Bureaucrat(){}


// MEMBER FUNCTIONS

int Bureaucrat::getGrade() const{
	return this->_grade;
}

const std::string Bureaucrat::getName() const{
	return this->_name;
}

void Bureaucrat::incrementGrade(){
	try{
		if ((this->_grade - 1) < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (GradeTooHighException & e){
		std::cout << "Exception " << e.what() << std::endl; 
	}
}

void Bureaucrat::decrementGrade(){
	try{
		if ((this->_grade + 1) > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (GradeTooLowException & e){
		std::cout << "Exception " << e.what() << std::endl; 
	}
}

void Bureaucrat::signForm(AForm& form){
	try{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e){
		std::cout << this->getName() << " couldn't  sign " << form.getName() << " because " << e.what() << std::endl; 
	}
}

void Bureaucrat::executeForm(AForm const & form){
	
	if(this->_grade > form.getToExecute() || !form.isSigned())
		std::cout << this->_name << " couldn't execute form" << std::endl;
	else{	
		form.execute(*this);
		// std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
}

// EXCEPTIONS

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade to high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade to low");
}

// << OVERLOAD


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bur)
{
	if(this != &bur){
		_grade = bur._grade;
	}
	return *this;
}

std::ostream& operator <<(std::ostream& os, const Bureaucrat& bur){
	os << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return os;
}
