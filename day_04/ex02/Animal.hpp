#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal{

public:

    Animal( void );
	virtual ~Animal( void );

	Animal( const Animal &animal );
	Animal& operator= ( const Animal &animal );

    virtual void        setType( std::string type );
    virtual std::string getType( void ) const;
    virtual void        makeSound( void ) const = 0;

protected:

	std::string _type;

};

#endif //ANIMAL_HPP
