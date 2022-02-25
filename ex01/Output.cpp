/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:47:47 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 17:39:05 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Output.hpp"

void	Output::print_message(std::string str)
{
	std::cout << str << std::endl;
}

void	Output::print_contact(Contact contact)
{
	std::cout << contact << std::endl;
}

void	Output::print_phonebook(PhoneBook phonebook)
{
	std::cout << phonebook << std::endl;
}

void	Output::prompt_firstname()
{
	print_message("Enter firstname:");
}

void	Output::prompt_lastname()
{
	print_message("Enter lastname:");
}

void	Output::prompt_nickname()
{
	print_message("Enter nickname:");
}

void	Output::prompt_phonenumber()
{
	print_message("Enter phonenumber:");
}

void	Output::prompt_darkestsecret()
{
	print_message("Enter darkestsecret:");
}

void	Output::prompt_index()
{
	print_message("Enter contact index (0 - 7):");
}

void	Output::prompt_command()
{
	print_message("Enter command (ADD / SEARCH / EXIT):");
}

void	Output::print_invalidiput()
{
	print_message("invalid input!");
}

Output::Output()
{
}

Output::~Output()
{
}