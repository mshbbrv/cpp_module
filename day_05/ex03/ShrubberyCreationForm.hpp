#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:

    ShrubberyCreationForm( void );
    ShrubberyCreationForm( std::string target );
    virtual ~ShrubberyCreationForm( void );

    ShrubberyCreationForm( const ShrubberyCreationForm &c );

    std::string     getTarget( void ) const;
    virtual void    execute( Bureaucrat const &executor ) const;

private:

    std::string _target;

    ShrubberyCreationForm& operator=( const ShrubberyCreationForm &o );

};

#endif //SHRUBBERYCREATIONFORM_HPP