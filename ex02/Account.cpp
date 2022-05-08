/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:42:35 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/08 23:32:06 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}


int Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

Account::Account (void)
{
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";closed" << std::endl;
}

Account::Account (int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";created" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";p_amount:" << _amount
				<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout 	<< ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout 	<< ";withdrawal:refused" << std::endl;
		return (0) ;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout 	<< ";withdrawal:" << withdrawal << ";amount:" << _amount 
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	return (1);
}

int	Account::checkAmount(void) const
{
	return(this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	t_time;
	std::tm		*time;
	char		print[19];	

	t_time = std::time(NULL);
	if (t_time == -1)
	{	
		std::cout << "time N/A" << std::endl;
		return ;
	}
	time = std::localtime(&t_time);
	if (!time)
	{	
		std::cout << "time N/A" << std::endl;
		return ;
	}
	std::strftime(print, sizeof(print), "[%Y%m%d_%H%M%S] ", time);
	std::cout << print;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout 	<< "accounts:" << _nbAccounts << ";total:" << _totalAmount
				<< ";deposits:" <<_totalNbDeposits << ";withdrawals:"
				<< _totalNbWithdrawals << std::endl;
}
