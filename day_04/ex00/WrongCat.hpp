#pragma once
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:

    WrongCat( void );
    ~WrongCat( void );

    WrongCat( const WrongCat &wrongCat );
    WrongCat& operator= (  const WrongCat &wrongCat );

    virtual void        setType( std::string type );
    virtual std::string getType( void ) const;
    virtual void        makeSound( void ) const;

private:

    std::string _type;

};

#endif //WRONGCAT_HPP