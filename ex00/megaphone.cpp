/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:54:57 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/04 21:39:27 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

std::string str_to_upper(std::string string) 
{
	for (int i = 0; string[i]; i++)
		string[i] = std::toupper(string[i]);
	return (string);
}

int main(int argc, char **argv)
{
	std::string string;

	if (argc == 1)
		string = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i]; i++)
			string += argv[i];
	}
	std::cout << str_to_upper(string) << std::endl;
}
