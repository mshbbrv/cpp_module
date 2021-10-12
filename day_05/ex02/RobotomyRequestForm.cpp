#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
        Form("RobotomyRequestForm", 72, 45),
        _target("None" ) {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
        Form("RobotomyRequestForm", 72, 45),
        _target( target ) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=( const RobotomyRequestForm &o ) {

    if ( this != &o )
        _target = o.getTarget();

    return *this;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &c ) :
        Form( c.getName(), c.getGradeToSign(), c.getGradeToExec() ),
        _target( c.getTarget() ) {}

std::string RobotomyRequestForm::getTarget( void ) const {

    return _target;
}

void RobotomyRequestForm::execute( const Bureaucrat &executor ) const {

    if ( getGradeToExec() < executor.getGrade() )
        throw Form::GradeTooLowException();
    else {

        std::cout << "Drrrrrrrrllll...  ";
        if ( rand() % 2 ) {
            std::cout << _target
                      << " has been robotomized"
                      << "\n";
        }
        else
            std::cout << "Robotomized failure :(" << "\n";
    }
}

