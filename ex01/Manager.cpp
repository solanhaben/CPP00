/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:21:55 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 21:21:10 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Manager.hpp"

Manager::Manager()
{
}

Manager::~Manager()
{
}

std::string	Manager::add_firstname()
{
	std::string firstname;

	output.prompt_firstname();
	firstname = input.scan_firstname();
	if(!Contact::valid_firstname(firstname))
	{
		output.print_invalidiput();
		return(add_firstname());
	}
	return (firstname);
}

std::string	Manager::add_lastname()
{
	std::string lastname;

	output.prompt_lastname();
	lastname = input.scan_lastname();
	if(!Contact::valid_lastname(lastname))
	{
		output.print_invalidiput();
		return(add_lastname());
	}
	return (lastname);
}

std::string	Manager::add_nickname()
{
	std::string nickname;

	output.prompt_nickname();
	nickname = input.scan_nickname();
	if(!Contact::valid_nickname(nickname))
	{
		output.print_invalidiput();
		return (add_nickname());
	}
	return (nickname);
}

std::string	Manager::add_phonenumber()
{
	std::string phonenumber;

	output.prompt_phonenumber();
	phonenumber = input.scan_phonenumber();
	if(!Contact::valid_phonenumber(phonenumber))
	{
		output.print_invalidiput();
		return (add_phonenumber());
	}
	return (phonenumber);
}

std::string	Manager::add_darkestsecret()
{
	std::string darkestsecret;

	output.prompt_darkestsecret();
	darkestsecret = input.scan_darkestsecret();
	if(!Contact::valid_darkestsecret(darkestsecret))
	{
		output.print_invalidiput();
		return (add_darkestsecret());
	}
	return (darkestsecret);
}

void	Manager::add()
{
	phonebook.add_contact(
	add_firstname(),
	add_lastname(),
	add_nickname(),
	add_phonenumber(),
	add_darkestsecret()
	);
}

int		Manager::get_index()
{
	int index;
	
	output.prompt_index();
	index = input.scan_index();
	if (!PhoneBook::valid_index(index))
		return (get_index());
	else
		return (index);
}

void	Manager::search()
{
	int	index;
	output.print_phonebook(phonebook);
	if (phonebook.get_contact(0).get_firstname().empty())
		return ;
	index = get_index();
	if (phonebook.get_contact(index).get_firstname().empty())
		return(search());
	output.print_contact(phonebook.get_contact(index));
}

void	Manager::start()
{
	while(1)
	{
		output.prompt_command();
		switch (input.scan_command())
		{
			case ADD:
				add();
				break ;
			case SEARCH:
				search();
				break ;
			case EXIT:
				return ;
			default:
				break ;
		}
	}
}
