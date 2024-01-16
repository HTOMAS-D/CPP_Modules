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
    std::string forms[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};

    for(int i = 0; i < 3; i++){
        if(!strcmp(formName.c_str(), forms[i].c_str())){
            switch(i){
            	case 0:
					holder = new RobotomyRequestForm(formTarget);
					break ;
				case 1:
					holder = new PresidentialPardonForm(formTarget);
					break ;
				case 2:
					holder = new ShrubberyCreationForm(formTarget);
					break ;
            }
            std::cout << forms[i] << " created!!" << std::endl;
            return (holder);
        }
    }
    throw Intern::NoSuchForm();
}
