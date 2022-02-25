/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Library.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:11:37 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 21:35:24 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Library.hpp"

bool	Library::is_alpha(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (true);
	if (letter >= 'A' && letter <= 'Z')
		return (true);
	return (false);
}

bool Library::striteri(std::string str, bool (*funct)(char))
{
	for(unsigned long i = 0; i < str.length(); i++)
	{
		if (funct(str[i]) == false)
			return (false);
	}
	return (true);
}


bool Library::striteri(std::string str, int (*funct)(int))
{
	for(unsigned long i = 0; i < str.length(); i++)
	{
		if (!funct(str[i]))
			return (false);
	}
	return (true);
}

std::string	Library::truncate(std::string str, size_t size)
{
	if (str.length() > size)
		return (str.substr(0, size - 1).append("."));
	str.insert(0, size - str.length(), ' ');
	return (str);
}