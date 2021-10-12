#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:

    RobotomyRequestForm( void );
    RobotomyRequestForm( std::string target );
    virtual ~RobotomyRequestForm( void );

    RobotomyRequestForm( const RobotomyRequestForm &c );

    std::string     getTarget( void ) const;
    virtual void    execute( Bureaucrat const &executor ) const;

private:

    std::string _target;

    RobotomyRequestForm& operator=( const RobotomyRequestForm &o );

};

#endif //ROBOTOMYREQUESTFORM_HPP