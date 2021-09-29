#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal {

public:

	Animal( void );
	Animal( std::string type );
	virtual ~Animal( void );

	Animal( const Animal &animal );
	Animal& operator= ( const Animal &animal );

	void        setType( std::string type );
	std::string getType( void ) const;

    virtual void        makeSound( void ) const;

protected:

	std::string _type;

};

#endif //ANIMAL_HPP
