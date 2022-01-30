#include <ctime>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	this->_totalAmount += initial_deposit;
	
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created" << std::endl;
}

Account::~Account( void ) {
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	
	this->_amount += deposit;
	this->_nbDeposits++;

	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << (this->_amount - deposit) << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits << ";"
		<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "withdrawal:";

	if (withdrawal <= this->_amount) {
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		
		std::cout
			<< withdrawal << ";"
			<< "amount:" << this->_amount << ";"
			<< "nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
		return true;
	} else {
		std::cout << "refused" << std::endl;
		return false;
	}
}

int		Account::checkAmount( void ) const {
	return (0);
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals << ";"
		<< std::endl;
}

int		Account::getNbAccounts( void ) { return Account::_totalAmount; }
int		Account::getTotalAmount( void ) { return Account::_nbAccounts; }
int		Account::getNbDeposits( void ) { return Account::_totalNbDeposits; }
int		Account::getNbWithdrawals( void ) { return Account::_totalNbWithdrawals; }

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout
		<< "accounts:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << ";"
		<< std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(0);
	std::tm *now = std::localtime(&t);
	std::cout
		<< "["
		<< (now->tm_year + 1900) << (now->tm_mon + 1) << now->tm_mday
		<< "_"
		<< now->tm_hour << now->tm_min << now->tm_sec
		<< "] ";
}
