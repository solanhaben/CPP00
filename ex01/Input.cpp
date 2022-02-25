/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:47:18 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 20:19:35 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Input.hpp"


Input::Input()
{
}

Input::~Input()
{
}

Command	Input::scan_command()
{
	std::string	str;

	std::cin >> str;
	if (!str.compare("SEARCH"))
		return(SEARCH);
	if (!str.compare("ADD"))
		return(ADD);
	if (!str.compare("EXIT"))
		return(EXIT);
	return(ERROR);
}

std::string	Input::scan_string()
{
	std::string str;

	std::cin >> str;
	return (str);
}

bool	Input::scan_int(int &integer)
{
	if (std::cin >> integer)
		return (true);
	return (false);
}

std::string Input::scan_firstname()
{
	return(scan_string());
}

std::string Input::scan_lastname()
{
	return(scan_string());
}

std::string Input::scan_nickname()
{
	return(scan_string());
}

std::string Input::scan_phonenumber()
{
	return(scan_string());
}

std::string Input::scan_darkestsecret()
{
	return(scan_string());
}

int	Input::scan_index()
{
	int	index;
	if(!scan_int(index))
		return (-1);
	else
		return (index);
}