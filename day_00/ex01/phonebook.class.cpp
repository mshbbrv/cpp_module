#include "phonebook.class.hpp"

PhoneBook::PhoneBook( void ) : _contacts(), _nextToUpdate(0) {}

PhoneBook::~PhoneBook( void ) {}

std::string PhoneBook::_getCorrectInput( const std::string prompt )
{
	std::string value;

	while (true)
	{
		std::cout << prompt;
		std::cin >> value;
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue;
		}
		else
			break;
	}
	return value;
}

void PhoneBook::addNewContact( void )
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string secret;

	firstName = _getCorrectInput("Enter contact first name: ");
	lastName = _getCorrectInput("Enter contact last name: ");
	nickname = _getCorrectInput("Enter contact nickname: ");
	phoneNumber = _getCorrectInput("Enter contact phone number: ");
	secret = _getCorrectInput("Enter contact darkest secret: ");

	if (_nextToUpdate != 8)
	{
		_contacts[_nextToUpdate].setContactFields(firstName, lastName,
												nickname, phoneNumber,
												secret);
		_nextToUpdate++;
	}
	else
		_pushNewContact(firstName,lastName,
					   nickname,phoneNumber,
					   secret);
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "----------Done! New contact created!----------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void PhoneBook::_pushNewContact( const std::string firstName,
								 const std::string lastName,
								 const std::string nickname,
								 const std::string phoneNumber,
								 const std::string secret )
{
	for (int i = 0; i < 8; i++)
	{
		if (i != 7)
		{
			_contacts[i].setContactFields(_contacts[i + 1].getFirstName(),
										  _contacts[i + 1].getLastName(),
										  _contacts[i + 1].getNickname(),
										  _contacts[i + 1].getPhoneNumber(),
										  _contacts[i + 1].getSecret());
		}
	}
	_contacts[7].setContactFields(firstName,lastName,nickname,
							  phoneNumber,secret);
}

std::string PhoneBook::_displayMode( std::string str )
{
	std::string shortcut;

	if (str.length() > 10)
	{
		shortcut = str.erase(9);
		shortcut.push_back('.');
		return shortcut;
	}
	else
		return str;
}

int PhoneBook::_displayPhoneBook( void )
{
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "-------------my awesome phonebook-------------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "nickname";
	std::cout << std::endl;

	int index = -1;
	while (++index < 8)
	{
		if (!_contacts[index].getFirstName().empty())
		{
			std::cout << std::right << std::setw(10) << index;
			std::cout << "|";
			std::cout << std::right << std::setw(10)
			<< _displayMode(_contacts[index].getFirstName());
			std::cout << "|";
			std::cout << std::right << std::setw(10)
			<< _displayMode(_contacts[index].getLastName());
			std::cout << "|";
			std::cout << std::right << std::setw(10)
			<< _displayMode(_contacts[index].getNickname());
			std::cout << std::endl;
		}
		else
			break;
	}
	std::cout << std::endl;
	return index - 1;
}

void PhoneBook::_displayContact( const int index )
{
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "--------------------CONTACT #" << index
	<< "----------------"<< std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "first name:\t" << _contacts[index].getFirstName() << std::endl;
	std::cout << "last name:\t" << _contacts[index].getLastName() << std::endl;
	std::cout << "nickname:\t" << _contacts[index].getNickname() << std::endl;
	std::cout << "phone number:\t" << _contacts[index].getPhoneNumber()
	<< std::endl;
	std::cout << "secret:\t\t" << _contacts[index].getSecret() <<std::endl;
	std::cout << std::endl;
}

int	PhoneBook::_getIndexFromUserInput( const int lastAvailableIndex )
{
	int index;

	do
	{
		std::cout << "Enter contact index to see full contact information: ";
		std::cin >> index;
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue;
		}
		if (index < 0 || index > lastAvailableIndex)
		{
			std::cerr << "Index out of range, try again" << std::endl;
			continue;
		}
		if (std::cin.fail())
		{
			std::cerr << "Incorrect input" << std::endl;
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			index = -1;
			continue;
		}
	} while (index < 0 || index > lastAvailableIndex);

	return index;
}
void PhoneBook::search( void )
{
	int lastAvailableIndex(0);
	int	index;

	lastAvailableIndex = _displayPhoneBook();
	if (lastAvailableIndex >= 0)
	{
		index = _getIndexFromUserInput(lastAvailableIndex);
		_displayContact(index);
	}
}