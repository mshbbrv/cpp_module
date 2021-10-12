#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::~Intern( void ) {}

Intern &Intern::operator=( const Intern &o ) {

    (void)o;
    return *this;
}

Intern::Intern( const Intern &c ) {
    (void)c;
}

Form *createRobotomyRequestForm( std::string target ) {

    return new RobotomyRequestForm( target );
}

Form *createShrubberyCreationForm( std::string target ) {

    return new ShrubberyCreationForm( target );
}

Form *createPresidentialPardonForm( std::string target ) {

    return new PresidentialPardonForm( target );
}

Form *Intern::makeForm( std::string formName, std::string formTarget ) {

    Form *newForm;

    typedef struct  s_FormCreator {
        std::string formNameInStruct;
        Form *(*funcPtr)( std::string );
    }               t_FormCreator;

    t_FormCreator forms[] = {
            { "robotomy request", &createRobotomyRequestForm },
            { "shrubbery creation", &createShrubberyCreationForm },
            { "president pardon", &createPresidentialPardonForm }
    };

    int i = 0;
    while ( i < 3 && formName != forms[i].formNameInStruct )
        i++;

    switch ( i ) {
        case 0:
            newForm = forms[0].funcPtr( formTarget );
            break;
        case 1:
            newForm = forms[1].funcPtr( formTarget );
            break;
        case 2:
            newForm = forms[2].funcPtr( formTarget );
            break;
        default:
            std::cout << "Form not found" << "\n";
            return NULL;
    }

    std::cout << "Intern creates " << newForm->getName() << "\n";
    return newForm;
}