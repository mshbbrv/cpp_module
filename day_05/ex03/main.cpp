#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void ) {

    Bureaucrat ben("Ben", 1 );
    Bureaucrat ted("Ted", 50 );
    Bureaucrat greg("Greg", 100 );
    Intern i;

    std::cout << "--------------fail----------------" << "\n";
    try {
        Form *x;

        x = i.makeForm("fail", "def");

        if ( x ) {
            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );

            greg.signForm( *x );
            ted.signForm( *x );
            ben.signForm( *x );

            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );
            delete x;
        }
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------ShrubberyCreationForm----------------" << "\n";
    try {
        Form *x;

        x = i.makeForm("shrubbery creation", "Forest");

        if ( x ) {
            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );

            greg.signForm( *x );
            ted.signForm( *x );
            ben.signForm( *x );

            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );
            delete x;
        }
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------RobotomyRequestForm----------------" << "\n";
    try {
        Form *x;

        x = i.makeForm("robotomy request", "Bender");

        if ( x ) {
            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );

            greg.signForm( *x );
            ted.signForm( *x );
            ben.signForm( *x );

            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );
            delete x;
        }
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------PresidentialPardonForm----------------" << "\n";
    try {

        Form *x;

        x = i.makeForm("president pardon", "42learner");

        if ( x ) {
            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );

            greg.signForm( *x );
            ted.signForm( *x );
            ben.signForm( *x );

            std::cout << *x;
            ben.executeForm( *x );
            ted.executeForm( *x );
            greg.executeForm( *x );
            delete x;
        }
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }
}