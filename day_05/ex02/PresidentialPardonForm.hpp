#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:

    PresidentialPardonForm( void );
    PresidentialPardonForm( std::string target );
    virtual ~PresidentialPardonForm( void );

    PresidentialPardonForm( const PresidentialPardonForm &c );

    std::string     getTarget( void ) const;
    virtual void    execute( Bureaucrat const &executor ) const;

private:

    std::string _target;

    PresidentialPardonForm& operator=( const PresidentialPardonForm &o );

};

#endif //PRESIDENTIALPARDONFORM_HPP