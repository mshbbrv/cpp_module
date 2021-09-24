#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{

public:

	ClapTrap( void );
	ClapTrap( std::string name );
	~ClapTrap( void );

	void	attack( std::string const& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

protected:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

};

#endif //CLAPTRAP_HPP
