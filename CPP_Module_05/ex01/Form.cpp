#include "Form.hpp"
#include "Bureaucrat.hpp"


// CONSTRUCTORS AND STUFF

Form::Form() : _name("Default"), _signed(false), _toSign(75), _toExecute(150){
    std::cout << "default constructor called" << std::endl;
}

Form::~Form(){}

Form::Form(std::string name, int toSign, int toExecute): _name (name), _toSign(toSign), _toExecute(toExecute){
    if(toSign < 1 ||  toExecute < 1)
        throw(Form::GradeTooHighException());
    else if (toSign > 150 || toExecute > 150)
        throw(Form:: GradeTooLowException());
    else
        this->_signed = false;
}

Form::Form(Form const &copy): _name (copy.getName()), _toSign(copy.getToSign()), _toExecute(copy.getToExecute()){
    this->_signed = false;
    std::cout << "copy constructor called" << std::endl;
}

//EXCEPTIONS

const char * Form::GradeTooHighException::what()const throw(){
    return ("Grade to high to be signed");
}

const char * Form::GradeTooLowException::what()const throw(){
    return ("Grade to low to be signed");
}

//GETTERS

std::string Form::getName() const{
    return this->_name;
}

int Form::getToExecute() const{
    return this->_toExecute;
}

int Form::getToSign() const{
    return this->_toSign;
}

bool Form::isSigned() const{
    return this->_signed;
}


void Form::beSigned(Bureaucrat& bur){
    if(bur.getGrade() >= this->getToSign())
        this->_signed = true;
    else
        throw(GradeTooLowException());
}

//OPERATORS

std::ostream& operator<<(std::ostream &os, Form &form){
    os << "Form name: " << form.getName() << std::endl;
    os << "Form is signed: " << form.isSigned() << std::endl;
    os << "Form grade to sign: " << form.getToSign() << std::endl;
    os << "Form grade to execute: " << form.getToExecute() << std::endl;
    return os;
}

