#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);//
}

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);//
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);//
}

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);//
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "account:\033[34m";
	std::cout << getNbAccounts();
	std::cout << "\033[0m;total:\033[34m";
	std::cout << getTotalAmount();
	std::cout << "\033[0m;deposits:\033[34m";
	std::cout << getNbDeposits();
	std::cout << "\033[0m;withdrawals:\033[34m";
	std::cout << getNbWithdrawals();
	std::cout << "\033[0m" << std::endl;
}

Account::Account( int initial_deposit ){
	this->_displayTimestamp();
	std::cout << "index:\033[34m";
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;amount:\033[34m";
	std::cout << initial_deposit;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	std::cout << "\033[0m;created" << std::endl;
}

Account::~Account( void ){
	this->_displayTimestamp();
	std::cout << "index:\033[34m";
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;amount:\033[34m";
	std::cout << this->_amount;
	std::cout << "\033[0m;closed" << std::endl;
}

void	Account::makeDeposit( int deposit ){
	this->_displayTimestamp();
	std::cout << "index:\033[34m";
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;p_amount:\033[34m";
	std::cout << this->_amount;
	std::cout << "\033[0m;deposit:\033[34m";
	std::cout << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "\033[0m;amount:\033[34m";
	std::cout << this->_amount;
	std::cout << "\033[0m;nb_deposits:\033[34m";
	std::cout << this->_nbDeposits;
	std::cout << "\033[0m" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	this->_displayTimestamp();
	std::cout << "index:\033[34m";
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;p_amount:\033[34m";
	std::cout << this->_amount;
	if (withdrawal <= this->_amount){
		std::cout << "\033[0m;withdrawal:\033[34m";
		std::cout << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << "\033[0m;amount:\033[34m";
		std::cout << this->_amount;
		std::cout << "\033[0m;nb_withdrawals:\033[34m";
		std::cout << this->_nbWithdrawals;
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
	std::cout << "index:\033[34m";
	std::cout << this->_accountIndex;
	std::cout << "\033[0m;amount:\033[34m";
	std::cout << this->_amount;
	std::cout << "\33[0m;deposits:\033[34m";
	std::cout << this->_nbDeposits;
	std::cout << "\33[0m;withdrawals:\033[34m";
	std::cout << this->_nbWithdrawals;
	std::cout << "\33[0m" << std::endl;
}

void	Account::_displayTimestamp( void ){
	time_t	now;
	tm		*ltm;

	now = time(0);
	ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
	if (ltm->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << ltm->tm_mon + 1;
	if (ltm->tm_mday < 10)
		std::cout << "0";
	std::cout << ltm->tm_mday << "_";
	if (ltm->tm_hour < 10)
		std::cout << "0";
	std:: cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0";
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0";
	std::cout << ltm->tm_sec << "] ";
}

Account::Account( void ){

}
