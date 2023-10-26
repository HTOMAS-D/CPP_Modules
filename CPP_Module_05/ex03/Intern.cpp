#include "Intern.hpp"

Intern::Intern(){std::cout << "Random intern created" << std::endl;}

Intern::~Intern(){std::cout << "Random intern died" << std::endl;}

Intern::Intern(Intern const &copy){
    (void) copy;
    std::cout << "copy constructor called" << std::endl;
}

Intern &Intern::operator=(Intern const &copy){
    (void)copy;
    return *this;
}

const char *Intern::NoSuchForm::what() const throw(){
    return("No such form");
}

AForm *Intern::makeForm(std::string formName, std::string formTarget) {
    AForm *holder;

    if (formName == "PresidentialPardonForm") {
        holder = new PresidentialPardonForm(formTarget);
        std::cout << "PresidentialPardonForm Created!!" << std::endl;
    } else if (formName == "ShrubberyCreationForm") {
        holder = new ShrubberyCreationForm(formTarget);
        std::cout << "ShrubberyCreationForm Created!!" << std::endl;
    } else if (formName == "RobotomyRequestForm") {
        holder = new RobotomyRequestForm(formTarget);
        std::cout << "RobotomyRequestForm Created!!" << std::endl;
    } else {
        throw Intern::NoSuchForm();
    }

    return holder;
}
