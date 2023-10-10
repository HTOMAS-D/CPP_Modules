#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat * Ricky = new Bureaucrat("Ricky", 1);
    std::cout << * Ricky << std::endl;
    Ricky->incrementGrade();
    std::cout << * Ricky << std::endl;
    Ricky->decrementGrade();
    std::cout << * Ricky << std::endl;
    delete Ricky;

    std::cout << std::endl << std::endl << std::endl << std::endl;


    Ricky = new Bureaucrat("Ricky", 150);
    std::cout << * Ricky << std::endl;
    Ricky->decrementGrade();
    std::cout << * Ricky << std::endl;
    Ricky->incrementGrade();
    std::cout << * Ricky << std::endl;
    delete Ricky;

    std::cout << std::endl << std::endl << std::endl << std::endl;

    // Ricky = new Bureaucrat("Ricky", 1);
    // std::cout << * Ricky << std::endl;
    // delete Ricky;
    // Ricky = new Bureaucrat("Ricky", 24);
    // std::cout << * Ricky << std::endl;
    // delete Ricky;
    // Ricky = new Bureaucrat("Ricky", 160);
    // std::cout << Ricky->getGrade() << std::endl;
    // delete Ricky;
    // Ricky = new Bureaucrat("Ricky", 72);
    // std::cout << * Ricky << std::endl;
    // delete Ricky;

    Bureaucrat henrique ("Higrade", 0);
    Bureaucrat henrique2 ("lowgrade", 160);


    // try { Bureaucrat letsTry("TooHigh", 0);	
	// }
	// catch (Bureaucrat::GradeTooLowException &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooHighException &e) {
	// 	std::cout << e.what() << std::endl;
	// }
    // std::cout << std::endl << std::endl << std::endl << std::endl;
    // try { Bureaucrat letsTry("TooLow", 151);	
	// }
	// catch (Bureaucrat::GradeTooLowException &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooHighException &e) {
	// 	std::cout << e.what() << std::endl;
	// }
    
}