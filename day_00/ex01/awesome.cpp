#include "awesome.hpp"
#include "phonebook.class.hpp"
#include "contact.class.hpp"

void	displayPromt(void)
{
	std::cout << "awesome phonebook commands: ADD, SEARCH, EXIT" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "ADD \t-- input a new contact’s information" << std::endl;
	std::cout << "SEARCH \t-- display a list of the available contacts"
			  << std::endl;
	std::cout << "EXIT \t-- quit" <<std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

std::string	getCommandFromUser(void)
{
	std::string	cmd;

	do
	{
		std::cout << "Enter the command: ";
		std::cin >> cmd;
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue;
		}
		if (cmd.compare("ADD") != 0 && cmd.compare("SEARCH") != 0
			&& cmd.compare("EXIT") != 0)
		{
			std::cerr << "Invalid command, try again" << std::endl;
			std::cout << "----------------------------------------------" << std::endl;
			displayPromt();
			continue;
		}
		if (std::cin.fail())
		{
			std::cerr << "Incorrect input" << std::endl;
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			continue;
		}
	} while (cmd.compare("ADD") != 0 && cmd.compare("SEARCH") != 0
			&& cmd.compare("EXIT") != 0);

	return cmd;
}

int main(void)
{
	PhoneBook	myPhoneBook;
	std::string	cmd;

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "-------welcome to my awesome phonebook!-------" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	displayPromt();
	std::cout << std::endl;

	while (true)
	{
		cmd = getCommandFromUser();
		if (cmd.compare("EXIT") == 0)
			exit(0);
		else if (cmd.compare("ADD") == 0)
			myPhoneBook.addNewContact();
		else if (cmd.compare("SEARCH") == 0)
			myPhoneBook.search();
	}
	return 0;
}
