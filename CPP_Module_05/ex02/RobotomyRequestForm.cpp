#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45), _target(target) {
	std::cout << "Default Constructor called of Robotomy Form" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy), _target(copy._target){
    std::cout << "Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy) 
{
    AForm::operator=(copy);
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & bur) const{
    int isIt = rand() % 100;
    if(checkperm(bur)){
        if(isIt >= 50){
            std::cout << this->getTarget() << " has been robotomized" << std::endl;
        }
        else
            std::cout << "Robotomy failed" <<" unlucky random: " << isIt << " below 50" << std::endl;
    }
}


const char *RobotomyRequestForm::CantSign::what() const throw(){
    return "Presidential exception: Cant Sign!!";
}