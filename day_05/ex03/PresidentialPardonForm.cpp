#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
        Form("PresidentialPardonForm", 25, 5),
        _target("None" ) {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
        Form("PresidentialPardonForm", 25, 5),
        _target( target ) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm &
PresidentialPardonForm::operator=( const PresidentialPardonForm &o ) {

    if ( this != &o )
        _target = o.getTarget();

    return *this;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &c ) :
        Form( c.getName(), c.getGradeToSign(), c.getGradeToExec() ),
        _target( c.getTarget() ) {}

std::string PresidentialPardonForm::getTarget( void ) const {

    return _target;
}

void PresidentialPardonForm::execute( const Bureaucrat &executor ) const {

    if ( getGradeToExec() < executor.getGrade() )
        throw Form::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned by Zafod Beeblebrox.\n";
}

