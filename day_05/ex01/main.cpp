#include "Bureaucrat.hpp"

int main( void ) {

    Bureaucrat ben("Ben", 1 );
    Bureaucrat ted("Ted", 50 );
    Bureaucrat greg("Greg", 100 );

    std::cout << ben;
    std::cout << ted;
    std::cout << greg;

    std::cout << "--------------150 grade form----------------" << "\n";
    try {

        Form superForm( "SuperForm", 150, 150);

        std::cout << superForm;
        greg.signForm( superForm );
        std::cout << superForm;
        ted.signForm(superForm );
        std::cout << superForm;
        ben.signForm(superForm );
        std::cout << superForm;
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }
    std::cout << "-------------75 grade form---------------" << "\n";
    try {

        Form superForm( "SuperForm", 75, 75);

        std::cout << superForm;
        greg.signForm( superForm );
        std::cout << superForm;
        ted.signForm(superForm );
        std::cout << superForm;
        ben.signForm(superForm );
        std::cout << superForm;
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------1 grade form---------------" << "\n";
    try {

        Form superForm( "SuperForm", 1, 1 );

        std::cout << superForm;
        greg.signForm( superForm );
        std::cout << superForm;
        ted.signForm(superForm );
        std::cout << superForm;
        ben.signForm(superForm );
        std::cout << superForm;
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }
}