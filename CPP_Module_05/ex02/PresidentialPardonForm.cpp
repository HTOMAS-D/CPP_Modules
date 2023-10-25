#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target, 25, 5), _target(target) {
	std::cout << "Default Constructor called of Presidential Form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy), _target(copy._target){
    std::cout << "Copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy) 
{
    AForm::operator=(copy);
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const{
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & bur) const{
    if(checkperm(bur)){
        std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}


const char *PresidentialPardonForm::CantSign::what() const throw(){
    return "Presidential exception: Cant Sign!!";
}