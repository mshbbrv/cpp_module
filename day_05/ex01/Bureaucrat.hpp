#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {

public:

    Bureaucrat( void );
    Bureaucrat( std::string name, int grade );
    ~Bureaucrat( void );

    Bureaucrat( const Bureaucrat &bureaucrat );
    Bureaucrat& operator= ( const Bureaucrat &bureaucrat );

	std::string getName( void ) const;
	int         getGrade( void ) const;

	void        upGrade( void );
	void        downGrade( void );

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
	int                 _grade;

};


std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif //BUREAUCRAT_HPP
