#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{

	Bureaucrat                    b1("Rafa ", 150);
	Bureaucrat                    b2("Vitor", 24);
	Bureaucrat                    b3("Ricky", 2);
	ShrubberyCreationForm         f1("Tree-Form");
	RobotomyRequestForm           f2("Robot");
	PresidentialPardonForm        f3("Pres-Form");

    std::cout << std::endl << std::endl;

	// std::cout << "\nB1 tries:\n\n";
    b1.signForm(f1);
    // b1.signForm(f2);
    b1.signForm(f3);
    b1.executeForm(f1);
    // b1.executeForm(f2);
    b1.executeForm(f3);

    std::cout << std::endl << std::endl;
	// std::cout << "\nNow b2 tries:\n\n";
	b2.signForm(f1);
	b2.signForm(f2);
	// b2.signForm(f3);
	b2.executeForm(f1);
	b2.executeForm(f2);
	// b2.executeForm(f3);

    std::cout << std::endl << std::endl;
	// std::cout << "\nNow b3 tries:\n\n";
	// b3.signForm(f1);
	// b3.signForm(f2);
	b3.signForm(f3);
	// b3.executeForm(f1);
	// b3.executeForm(f2);
	b3.executeForm(f3);
    std::cout << std::endl << std::endl;
    std::cout << std::endl << std::endl;

    Intern randomDude;
    std::cout << std::endl;
    try {
        AForm *holder1;
        holder1 = randomDude.makeForm("ola", "alguem");
        std::cout << std::endl << std::endl;
        delete holder1;
    }
    catch(const Intern::NoSuchForm& e) {
        std::cerr << "Error: " << e.what() << std::endl << std::endl << std::endl;
    }
    try {
        AForm *holder1;
        holder1 = randomDude.makeForm("PresidentialPardonForm", "alguem");
        std::cout << std::endl << std::endl;
        delete holder1;
    }
    catch(const Intern::NoSuchForm& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try {
        AForm *holder1;
        holder1 = randomDude.makeForm("RobotomyRequestForm", "alguem");
        std::cout << std::endl << std::endl;
        delete holder1;
    }
    catch(const Intern::NoSuchForm& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try {
        AForm *holder1;
        holder1 = randomDude.makeForm("ShrubberyCreationForm", "alguem");
        std::cout << std::endl << std::endl;
        delete holder1;
    }
    catch(const Intern::NoSuchForm& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	return (0);
}