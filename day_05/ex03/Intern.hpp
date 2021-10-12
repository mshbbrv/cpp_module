#pragma once
#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern {

public:

    Intern( void );
    ~Intern( void );

    Form *makeForm( std::string formName, std::string formTarget );

private:

    Intern( const Intern &c );
    Intern& operator= ( const Intern &o );

};

#endif //INTERN_HPP