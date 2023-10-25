#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    // Bureaucrat henrique ("Cansign", 20);
    // Bureaucrat rafa ("Nosign", 90);
    // ShrubberyCreationForm cub3d("cub3d", 45, 1);
    // std::cout << "to sign: " << cub3d.getToSign() << std::endl;
    // std::cout << "henrique grade: " << henrique.getGrade() << std::endl;
    // std::cout << "rafa grade: " << rafa.getGrade() << std::endl;
    // rafa.signForm(cub3d);
    // henrique.signForm(cub3d);

    srand(time(NULL));
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


    // int test = rand() % 100;
    // std::cout << "random: " << test << std::endl;
    // test = rand() % 100;
    // std::cout << "random: " << test << std::endl;
    // test = rand() % 100;
    // std::cout << "random: " << test << std::endl;
    // test = rand() % 100;
    // std::cout << "random: " << test << std::endl;
    // test = rand() % 100;
    // std::cout << "random: " << test << std::endl;
    // test = rand() % 100;
    // std::cout << "random: " << test << std::endl;
    // test = rand() % 100;
    // std::cout << "random: " << test << std::endl;
    // test = rand() % 100;
    // std::cout << "random: " << test << std::endl;



	return (0);

}