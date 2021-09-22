#pragma once
#ifndef __KAREN_HPP__
#define __KAREN_HPP__
# include <string>
# include <iostream>

class Karen{

public:

	Karen( void );
	~Karen( void );

	void	complain( std::string level );

private:

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
	void	_noSuchLevel( void );

	void		(Karen::*_funcPointers[5])();
	std::string	_levels[5];
};

#endif /* __KAREN_HPP__ */