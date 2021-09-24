#pragma once
#ifndef CAT_HPP
#define CAT_HPP
# include "Animal.hpp"

class Cat: virtual public Animal {

public:

	Cat( void );
	~Cat( void );

	Cat( const Cat &cat );
	Cat& operator= (  const Cat &cat );

    virtual void        setType( std::string type );
    virtual std::string getType( void ) const;
	virtual void        makeSound( void ) const;

private:

    std::string _type;

};

#endif //CAT_HPP