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
#include "Account.hpp"

Account::Account(void)
{
	this->_accountIndex = Account::getNbAccounts();
	this->_amount= 0;
	this->_nbDeposits= 0;
	this->_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	Account::_nbAccounts++;
	if (initial_deposit > 0)
		Account::_totalAmount += initial_deposit;
	std::cout	<< "[Timestamp] "
				<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::~Account(void)
{
	std::cout	<< "[Timestamp] "
				<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

int	getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	displayAccountsInfos( void )
{
	std::cout	<< "[Timestamp] "
				<< "accounts:" << Account::getNbAccounts() << ";"
				<< "total:" << Account::getTotalAmount() << ";"
				<< "deposits:" << Account::getNbDeposits() << ";"
				<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	makeDeposit( int deposit )
{
	int	p_amount = this->amount;

	std::cout	<< "[Timestamp] "
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

bool	makeWithdrawal( int withdrawal )
{
	int	p_amount = this->amount;

	std::cout	<< "[Timestamp] "
				<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << p_amount << ";"
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
	{
		std::cout << "refused" << std::endl;
	}
}

int		checkAmount( void ) const
{
	return this->_amount;
}

void	displayStatus( void ) const
{
	std::cout	<< "[Timestamp] "
				<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

static void	_displayTimestamp( void )
{}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
