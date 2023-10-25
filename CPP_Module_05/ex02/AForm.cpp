#include "AForm.hpp"
#include "Bureaucrat.hpp"


// CONSTRUCTORS AND STUFF

AForm::AForm() : _name("Default"), _signed(false), _toSign(75), _toExecute(150){
    std::cout << "default constructor called" << std::endl;
}

AForm::~AForm(){}

AForm::AForm(std::string name, int toSign, int toExecute): _name (name), _toSign(toSign), _toExecute(toExecute){
    if(toSign < 1 ||  toExecute < 1)
        throw(AForm::GradeTooHighException());
    else if (toSign > 150 || toExecute > 150)
        throw(AForm:: GradeTooLowException());
    else
        this->_signed = false;
}

AForm::AForm(AForm const &copy): _name (copy.getName()), _toSign(copy.getToSign()), _toExecute(copy.getToExecute()){
    this->_signed = false;
    std::cout << "copy constructor called" << std::endl;
}

//EXCEPTIONS

const char * AForm::GradeTooHighException::what()const throw(){
    return ("Grade to high to be signed");
}

const char * AForm::GradeTooLowException::what()const throw(){
    return ("Grade to low to be signed");
}
const char * AForm::GradeTooHighExceptionExecute::what()const throw(){
    return ("Grade to high to execute");
}

const char * AForm::GradeTooLowExceptionExecute::what()const throw(){
    return ("Grade to low to execute");
}

const char * AForm::FormUnsigned::what()const throw(){
    return ("Form is not signed");
}

//GETTERS

std::string AForm::getName() const{
    return this->_name;
}

int AForm::getToExecute() const{
    return this->_toExecute;
}

int AForm::getToSign() const{
    return this->_toSign;
}

bool AForm::isSigned() const{
    return this->_signed;
}


// SIGNES AND EXECUTES

void AForm::beSigned(Bureaucrat& bur){
    if(bur.getGrade() <= this->getToSign())
        this->_signed = true;
    else
        throw(GradeTooLowException());
}

bool AForm::checkperm(Bureaucrat const & bur) const{
    try{
        if (bur.getGrade() > this->_toExecute)
            throw AForm::GradeTooLowExceptionExecute();
        else if (bur.getGrade() < 0)
            throw AForm::GradeTooHighExceptionExecute();
        if (this->isSigned() == false)
            throw AForm::FormUnsigned();
        else
            return (true);
    }
    catch (GradeTooLowExceptionExecute & e) {std::cout << e.what() << std::endl;}
    catch (GradeTooHighExceptionExecute & e) {std::cout << e.what() << std::endl;}
    catch (FormUnsigned & e) {std::cout << e.what() << std::endl;}
    return (false);
}


//OPERATORS

std::ostream& operator<<(std::ostream &os, AForm &Aform){
    os << "Form name: " << Aform.getName() << std::endl;
    os << "Form is signed: " << Aform.isSigned() << std::endl;
    os << "Form grade to sign: " << Aform.getToSign() << std::endl;
    os << "Form grade to execute: " << Aform.getToExecute() << std::endl;
    return os;
}

AForm& AForm::operator=(const AForm& copy) {
    if (this != &copy) {
        _signed = copy._signed;
    }
    return *this;
}