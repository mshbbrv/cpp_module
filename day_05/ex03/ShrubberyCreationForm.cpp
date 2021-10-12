#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
Form("ShrubberyCreationForm", 145, 137),
_target("None" ) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
Form("ShrubberyCreationForm", 145, 137),
_target( target ) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=( const ShrubberyCreationForm &o ) {

    if ( this != &o )
        _target = o.getTarget();

    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &c ) :
Form( c.getName(), c.getGradeToSign(), c.getGradeToExec() ),
_target( c.getTarget() ) {}

std::string ShrubberyCreationForm::getTarget( void ) const {

    return _target;
}

void ShrubberyCreationForm::execute( const Bureaucrat &executor ) const {

    if ( getGradeToExec() < executor.getGrade() )
        throw Form::GradeTooLowException();
    else {

        std::ofstream outf((_target + "_shrubbery").c_str(),
                            std::ios::out );
        if ( !outf )
            std::cout << "Oops! Something went wrong" << '\n';

        outf << "    /\\    " << "\n";
        outf << "   /  \\   " << "\n";
        outf << "  /____\\  " << "\n";
        outf << "     |     " << "\n";
        outf.close();

        std::cout << _target + "_shrubbery" << " is created!" << "\n";
    }
}

