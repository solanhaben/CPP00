/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:31:42 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 21:29:25 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	position = 0;
}

PhoneBook::~PhoneBook()
{
}

bool	PhoneBook::add_contact(std::string firstname, 
			std::string lastname,
			std::string nickname, 
			std::string phonenumber,
			std::string darkestsecret)
{
	contact[position % 8].set_firstname(firstname);
	contact[position % 8].set_lastname(lastname);
	contact[position % 8].set_nickname(nickname);
	contact[position % 8].set_phonenumber(phonenumber);
	contact[position % 8].set_darkestsecret(darkestsecret);
	position++;
	return (true);
}

Contact	PhoneBook::get_contact(int index)
{
	return (contact[index]);
}

bool	PhoneBook::check_contact(int index)
{
	if (index < 0 || index > 7)
		return (false);
	if (contact[index].get_firstname().compare(""))
		return (false);
	return (true);
}

bool PhoneBook::valid_index(int index)
{
	if (index < 0 || index > 7)
		return (false);
	return (true);
}

std::ostream& operator<< (std::ostream& os, PhoneBook& phonebook)
{	
	if (phonebook.get_contact(0).get_firstname().empty())
	{
		os << "\nPhonebook is empty!\n";
		return (os);
	}
	for (int i = 0; i < 8; i++)
	{
		if (phonebook.get_contact(i).get_firstname().empty())
			break ;
		os << i << "         ";
		os << '|';
		os << Library::truncate(phonebook.get_contact(i).get_firstname(), 10);
		os << '|';
		os << Library::truncate(phonebook.get_contact(i).get_lastname(), 10);
		os << '|';
		os << Library::truncate(phonebook.get_contact(i).get_nickname(), 10);
		os << std::endl;
	}
	return (os) ;
}