#include "Bureaucrat.hpp"

int main( void ) {

    std::cout << "--------------default bureaucrat----------------" << "\n";
    try {

        Bureaucrat bureaucrat;

        std::cout << "bureaucrat " << bureaucrat.getName() << " created!"
        << "\n";
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------0 grade bureaucrat--------------" << "\n";
    try {

        Bureaucrat bureaucrat("Bart", 0);

        std::cout << "bureaucrat " << bureaucrat.getName() << " created!"
        << "\n";
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "------------151 grade bureaucrat-------------" << "\n";
    try {

        Bureaucrat bureaucrat("Bart", 151);

        std::cout << "bureaucrat " << bureaucrat.getName() << " created!"
        << "\n";
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------downgrade default bureaucrat-----------" << "\n";
    try {

        Bureaucrat bureaucrat;

        std::cout << "bureaucrat " << bureaucrat.getName() << " created!"
        << "\n";

        bureaucrat.downGrade();
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------upgrade 1 grade bureaucrat------------" << "\n";
    try {

        Bureaucrat bureaucrat("Bart", 1);

        std::cout << "bureaucrat " << bureaucrat.getName() << " created!"
        << "\n";

        bureaucrat.upGrade();
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }
}