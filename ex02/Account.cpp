#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::getNbAccounts( void ){
	return (_nbAccounts);//
}

int	Account::getTotalAmount( void ){
	return (_totalAmount);//
}

int	Account::getNbDeposits( void ){
	return (_totalNbDeposits);//
}

int	Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);//
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "account:\033[33m";
	std::cout << getNbAccounts();
	std::cout << "\033[0m;total:\033[33m";
	std::cout << getTotalAmount();
	std::cout << "\033[0m;deposits:\033[33m";
	std::cout << getNbDeposits();
	std::cout << "\033[0m;withdrawals:\033[33m";
	std::cout << getNbWithdrawals();
	std::cout << "\033[0m" << std::endl;
}

Account::Account( int initial_deposit ){
	this->_displayTimestamp();
	std::cout << "index:\033[33m";
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;amount:\033[33m";
	std::cout << initial_deposit;
	this->_amount = initial_deposit;
	std::cout << "\033[0m;created" << std::endl;
}

Account::~Account( void ){
	this->_displayTimestamp();
	std::cout << "index:\033[33m";
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;amount:\033[33m";
	std::cout << this->_totalAmount;
	std::cout << "\033[0m;closed" << std::endl;
}

void	Account::makeDeposit( int deposit ){
	this->_displayTimestamp();
	std::cout << "p_amount:\033[33m";
	std::cout << this->_totalAmount;
	std::cout << "\033[0m;deposit:\033[33m";
	std::cout << deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	std::cout << "\033[0m;amount:\033[33m";
	std::cout << this->_totalAmount;
	std::cout << "\033[0m;nb_deposits:\033[33m";
	std::cout << this->_totalNbDeposits;
	std::cout << "\033[0m" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	this->_displayTimestamp();
	std::cout << "p_amount:\033[33m";
	std::cout << this->_totalAmount;
	if (withdrawal <= this->_totalAmount){
		std::cout << "\033[0m;withdrawal:\033[33m";
		std::cout << withdrawal;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << "\033[0m;amount:\033[33m";
		std::cout << this->_totalAmount;
		std::cout << "\033[0m;nb_withdrawals:\033[33m";
		std::cout << this->_totalNbWithdrawals;
		std::cout << "\033[0m" << std::endl;
		return (0);
	}
	else
		std::cout << "\033[0m;withdrawal:refused" << std::endl;
	return (1);
}

int	Account::checkAmount( void ) const{
	return (0);//
}

void	Account::displayStatus( void ) const{
	this->_displayTimestamp();
	std::cout << "index:\033[33m";
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;amount:\033[33m";
	std::cout << this->_totalAmount;
	std::cout << "\33[0m;deposits:\033[33m";
	std::cout << this->_totalNbDeposits;
	std::cout << "\33[0m;withdrawals:\033[33m";
	std::cout << this->_totalNbWithdrawals;
	std::cout << "\33[0m" << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t	now;
	tm		*ltm;

	now = time(0);
	ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year << ltm->tm_mon << ltm->tm_mday
		<< "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "]";
}

Account::Account( void ){
	(void)_amount;
	(void)_nbDeposits;
	(void)_nbWithdrawals;
}
