#include "Form.hpp"

Form::Form( void ) : _name("Unnamed"), _isSigned( false),
_gradeToSign( 150 ), _gradeToExec( 150 ) {}

Form::Form( std::string name, int gradeToSign, int gradeToExec ) : _name( name ),
_isSigned( false ), _gradeToSign( gradeToSign ), _gradeToExec( gradeToExec ) {

    if (_gradeToSign < 1 || _gradeToExec < 1)
        throw Form::GradeTooHighException();

    if ( _gradeToSign > 150 || _gradeToExec > 150 )
        throw Form::GradeTooLowException();

}

Form::~Form( void ) {}

Form &Form::operator=( const Form &form ) {

    if ( this != &form )
        _isSigned = form.isSigned();

    return *this;
}

Form::Form( const Form &form ) : _name( form.getName() ),
_isSigned( form.isSigned() ), _gradeToSign( form.getGradeToSign() ),
_gradeToExec( form.getGradeToExec() ) {}

std::string Form::getName( void ) const {

    return _name;
}

int Form::getGradeToSign( void ) const {

    return _gradeToSign;
}

int Form::getGradeToExec(void ) const {

    return _gradeToExec;
}

bool Form::isSigned( void ) const {

    return _isSigned;
}

void Form::beSigned( Bureaucrat &bureaucrat ) {

    if ( bureaucrat.getGrade() > _gradeToSign )
        throw Form::GradeTooLowException();
    else
        _isSigned = true;
}

const char *Form::GradeTooHighException::what( void ) const throw() {

    return "Grade too high!";
}

const char *Form::GradeTooLowException::what( void ) const throw() {

    return "Grade too low!";
}

std::ostream &operator<<(std::ostream &out, const Form &form) {

    out << form.getName() << ":\n grade to sign is " << form.getGradeToSign()
    << "\n grade to exec is " << form.getGradeToExec() << "\n status: ";
    form.isSigned() ? out << "signed\n" : out << "not signed\n";

    return out;
}