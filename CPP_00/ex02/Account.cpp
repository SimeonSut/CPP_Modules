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

#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit), _account_Index(_nbAccounts), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts++;
	if (initial_deposit > 0)
		Account::_totalAmount += initiale_deposit;
}

Account::~Account(void)
{
	std::cout	<< "[Timestamp] "
				<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

static int	getNbAccounts( void )
{}

static int	getTotalAmount( void )
{}

static int	getNbDeposits( void )
{}

static int	getNbWithdrawals( void )
{}

static void	displayAccountsInfos( void )
{
	std::cout	<< "[Timestamp] "
				<< "accounts:" << Account::_nhAccounts << ";"
				<< "total:" << Account::_totalAmount << ";"
				<< "deposits:" << Account::_totalNbDeposits << ";"
				<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	makeDeposit( int deposit )
{}

bool	makeWithdrawal( int withdrawal )
{}

int		checkAmount( void ) const
{}

void	displayStatus( void ) const
{}

static void	_displayTimestamp( void )
{}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
