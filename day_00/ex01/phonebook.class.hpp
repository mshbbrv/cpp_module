#pragma once
#ifndef INC_00_PHONEBOOK_H
#define INC_00_PHONEBOOK_H
#include "contact.class.hpp"

class PhoneBook {


private:

	Contact		_contacts[8];
	int			_nextToUpdate;

	void		_pushNewContact( const std::string firstName,
							   const std::string lastName,
							   const std::string nickname,
							   const std::string phoneNumber,
							   const std::string secret );
	std::string	_displayMode( std::string str );
	int			_displayPhoneBook( void );
	void		_displayContact( const int index );
	int			_getIndexFromUserInput( const int lastAvailableIndex );
	std::string	_getCorrectInput( const std::string prompt );

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	addNewContact( void );
	void	search( void );

};

#endif //INC_00_PHONEBOOK_H
