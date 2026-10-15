/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 18:11:59 by marvin            #+#    #+#             */
/*   Updated: 2026/10/03 18:11:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

std::string	TimeStamp()
{
	char		str[19];
	std::time_t	tm;
	struct tm	*datetime;
	std::string	timestamp;

	std::time(&tm);
	datetime = std::localtime(&tm);
	strftime(str, 19, "[%Y%m%d_%H%M%S] ", datetime);
	timestamp = str;

	return timestamp;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::getNbAccounts();
	this->_amount = 0;
	Account::_nbAccounts++;

	if (initial_deposit > 0)
	{
		Account::_totalAmount += initial_deposit;
		this->_amount += initial_deposit;
	}

	std::cout	<< TimeStamp()
				<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::~Account(void)
{
	std::cout	<< TimeStamp()
				<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

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

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	std::cout	<< TimeStamp()
				<< "accounts:" << Account::getNbAccounts() << ";"
				<< "total:" << Account::getTotalAmount() << ";"
				<< "deposits:" << Account::getNbDeposits() << ";"
				<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = this->_amount;

	std::cout	<< TimeStamp()
				<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << p_amount << ";";
	if (deposit >= 0)
	{
		this->_amount = p_amount + deposit;
		Account::_totalAmount += deposit;
		this->_nbDeposits++;
		Account::_totalNbDeposits++;
		std::cout	<< "deposit:" << deposit << ";"
					<< "amount:" << this->_amount << ";"
					<< "nb_deposits:" << this->_nbDeposits << std::endl;
	}
	else
		std::cout << "refused" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = this->_amount;

	std::cout	<< TimeStamp()
				<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << p_amount << ";";
	if (withdrawal >= 0 && withdrawal <= p_amount)
	{
		this->_amount = p_amount - withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout	<< "withdrawal:" << withdrawal << ";"
					<< "amount:" << this->_amount << ";"
					<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else
		std::cout << "refused" << std::endl;
	return false;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	std::cout	<< TimeStamp()
				<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
