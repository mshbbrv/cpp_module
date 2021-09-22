#include "contact.class.hpp"

Contact::Contact()
				: _firstName(""),
				_lastName(""),
				_nickname(""),
				_phoneNumber(""),
				_secret("")
{}

Contact::~Contact() {}

std::string Contact::getFirstName( void ) { return _firstName; }

std::string Contact::getLastName( void ) { return _lastName; }

std::string Contact::getNickname( void ) { return _nickname; }

std::string Contact::getPhoneNumber( void ) { return _phoneNumber; }

std::string Contact::getSecret( void ) { return _secret; }

void Contact::setContactFields( const std::string firstName,
								const std::string lastName,
								const std::string nickname,
								const std::string phoneNumber,
								const std::string secret )
{
	_firstName = firstName;
	_lastName = lastName;
	_nickname = nickname;
	_phoneNumber = phoneNumber;
	_secret = secret;
}