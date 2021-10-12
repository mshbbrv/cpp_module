#pragma once
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

    Form( void );
    Form( std::string name, int gradeToSign, int gradeToExec );
    virtual ~Form( void );

    Form( const Form &form );

    std::string     getName( void ) const;
    int             getGradeToSign( void ) const;
    int             getGradeToExec( void ) const;
    bool            isSigned( void ) const;
    void            beSigned( Bureaucrat const &bureaucrat );

    virtual void    execute( Bureaucrat const &executor ) const = 0;

    class GradeTooHighException : public std::exception {

    public:

        virtual const char *what( void ) const throw();
    };

    class GradeTooLowException : public std::exception {

    public:

        virtual const char *what( void ) const throw();
    };

private:

    const std::string   _name;
    bool                _isSigned;
    const int           _gradeToSign;
    const int           _gradeToExec;

    Form& operator= ( const Form &form );


};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif //FORM_HPP
