#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::t::Account( int deposit ) : _amount(deposit)
{
	_nbAccounts++;
	_accountIndex = getNbAccounts() - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
	_totalAmount += checkAmount();
}

Account::t::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed" << std::endl;
}

void Account::t::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::t::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	if (withdrawal <= _amount)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "amount:" << checkAmount() << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
}

void Account::t::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::t::checkAmount() const
{
	return _amount;
}

void Account::t::_displayTimestamp( void )
{
	std::time_t res = std::time(nullptr);
	char mbstr[100];

	if (std::strftime(mbstr, sizeof(mbstr), "%Y%m%d_%H%M%S", std::localtime
			(&res))) {
		std::cout << "[" << mbstr << "] ";
	}
}

int Account::t::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::t::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::t::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int Account::t::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::t::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int Account::t::_nbAccounts = 0;
int Account::t::_totalAmount = 0;
int Account::t::_totalNbDeposits = 0;
int Account::t::_totalNbWithdrawals = 0;