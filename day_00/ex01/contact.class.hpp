#pragma once
#ifndef INC_00_CONTACT_CLASS_H
#define INC_00_CONTACT_CLASS_H
#include "awesome.hpp"

class Contact {


private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_secret;

public:

	Contact();
	~Contact();

	std::string	getFirstName( void );
	std::string	getLastName( void );
	std::string	getNickname( void );
	std::string	getPhoneNumber( void );
	std::string	getSecret( void );
	void		setContactFields( const std::string firstName,
								  const std::string lastName,
								  const std::string nickname,
								  const std::string phoneNumber,
								  const std::string secret );

};

#endif //INC_00_CONTACT_CLASS_H
