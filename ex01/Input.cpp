/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:00:41 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 18:32:38 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Input.hpp"

int	Input::ScanIndex(void)
{
	int index;

	std::cin >> index;
	return (index);
}

std::string Input::ScanString(void)
{
	std::string string;

	getline(std::cin, string);
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
	return (string);
}

t_cmd	Input::ScanCommand(void)
{
	std::string	string;

	string = ScanString();
	if (!string.compare("ADD"))
		return (ADD);
	else if (!string.compare("SEARCH"))
		return (SEARCH);
	else if (!string.compare("EXIT"))
		return (EXIT);
	else
		return (ERROR);
}