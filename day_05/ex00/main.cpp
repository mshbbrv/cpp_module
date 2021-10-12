#include "Bureaucrat.hpp"

int main( void ) {

    std::cout << "--------------default bureaucrat----------------" << "\n";
    try {

        Bureaucrat def;
        std::cout << def;
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "---------------0 grade bureaucrat---------------" << "\n";
    try {

        Bureaucrat bart("Bart", 0);
        std::cout << bart;
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "--------------151 grade bureaucrat--------------" << "\n";
    try {

        Bureaucrat bart("Bart", 151);
        std::cout << bart;
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "------------downgrade grade bureaucrat----------" << "\n";
    try {

        Bureaucrat nick("Nick", 149);

        std::cout << nick;
        nick.downGrade();
        std::cout << nick;
        nick.downGrade();
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }

    std::cout << "------------upgrade grade bureaucrat------------" << "\n";
    try {

        Bureaucrat greg("Greg", 2);

        std::cout << greg;
        greg.upGrade();
        std::cout << greg;
        greg.upGrade();
    }
    catch (std::exception &exception) {

        std::cout << "Exception: " << exception.what() << "\n";
    }
}