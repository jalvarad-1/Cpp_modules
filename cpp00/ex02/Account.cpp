/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <jalvarad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:54:48 by jalvarad          #+#    #+#             */
/*   Updated: 2022/05/04 17:10:14 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
/*  *************** GETTERS *******************		*/

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout<<" "<<"accounts:"<<Account::getNbAccounts()<<";";
	std::cout<<"total:"<<Account::getTotalAmount()<<";";
	std::cout<<"deposits:"<<Account::getNbDeposits()<<";";
	std::cout<<"withdrawals:"<<Account::getNbWithdrawals()<<std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	if (initial_deposit < 0)
		this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	Account::_totalAmount += initial_deposit;
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount;
	std::cout<<";created\n";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount;
	std::cout<<";closed\n";
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
	if(deposit <= 0)
	{
		std::cout << ";deposit:refused" << std::endl;
		return ;
	}
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->checkAmount();
	this->_nbDeposits++;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
	if(withdrawal > this->checkAmount() || withdrawal <= 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	std::cout << ";amount:" << this->checkAmount();
	this->_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	return true;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits ;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime(buffer,80,"[%Y%m%j_%H%M%S]", timeinfo);
	std::cout << buffer ;
}

Account::Account (void)
{
	this->_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount;
	std::cout<<";created\n";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//index:0;amount:47;deposits:1;withdrawals:0