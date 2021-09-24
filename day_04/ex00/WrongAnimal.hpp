#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal{

public:

    WrongAnimal( void );
    ~WrongAnimal( void );

    WrongAnimal( const WrongAnimal &wrongAnimal );
    WrongAnimal& operator= ( const WrongAnimal &wrongAnimal );

    void        setType( std::string type );
    std::string getType( void ) const;
    void        makeSound( void ) const;

protected:

    std::string _type;

};

#endif //WRONGANIMAL_HPP
