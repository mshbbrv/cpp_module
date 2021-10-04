#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("Unnamed"), _grade( 150 ) {}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ),
                                                        _grade( grade ) {

    if (_grade < 1 )
        throw Bureaucrat::GradeTooLowException();

    if ( _grade > 150 )
        throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &bureaucrat ) {

    if ( this != &bureaucrat )
        _grade = bureaucrat.getGrade();

    return *this;
}

Bureaucrat::Bureaucrat( const Bureaucrat &bureaucrat ) {

    *this = bureaucrat;
}

std::string Bureaucrat::getName( void ) const {

    return _name;
}

int Bureaucrat::getGrade( void ) const {

    return _grade;
}

void Bureaucrat::upGrade( void ) {

    if ( _grade == 1 )
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::downGrade( void ) {

    if ( _grade == 150 )
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {

    return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {

    return "Grade too low!";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {

    return out << bureaucrat.getName() << ", bureaucrat grade "
    << bureaucrat.getGrade() << "\n";
}