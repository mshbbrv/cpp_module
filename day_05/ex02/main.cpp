#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {

    Bureaucrat ben("Ben", 1 );
    Bureaucrat ted("Ted", 50 );
    Bureaucrat greg("Greg", 100 );

    std::cout << "--------------ShrubberyCreationForm----------------" << "\n";
    try {
        ShrubberyCreationForm x( "Moon" );

        std::cout << x;
        ben.executeForm( x );
        ted.executeForm( x );
        greg.executeForm( x );

        greg.signForm( x );
        ted.signForm( x );
        ben.signForm( x );

        std::cout << x;
        ben.executeForm( x );
        ted.executeForm( x );
        greg.executeForm( x );
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------RobotomyRequestForm----------------" << "\n";
    try {
        RobotomyRequestForm x( "Moon" );

        std::cout << x;
        ben.executeForm( x );
        ted.executeForm( x );
        greg.executeForm( x );

        greg.signForm( x );
        ted.signForm( x );
        ben.signForm( x );

        std::cout << x;
        ben.executeForm( x );
        ted.executeForm( x );
        greg.executeForm( x );
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------PresidentialPardonForm----------------" << "\n";
    try {

        PresidentialPardonForm x( "Moon" );

        std::cout << x;
        ben.executeForm( x );
        ted.executeForm( x );
        greg.executeForm( x );

        greg.signForm( x );
        ted.signForm( x );
        ben.signForm( x );

        std::cout << x;
        ben.executeForm( x );
        ted.executeForm( x );
        greg.executeForm( x );
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }
}