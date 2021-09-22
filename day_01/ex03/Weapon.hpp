#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

# include <string>

class Weapon{

public:

	Weapon( std::string type );
	~Weapon( void );

	const std::string&	getType( void ) const;
	void				setType( std::string type );

private:

	std::string _type;

};

#endif /* __WEAPON_HPP__ */