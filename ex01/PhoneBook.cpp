/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:27:07 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 18:39:43 by fbindere         ###   ########.fr       */
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

bool PhoneBook::ValidIndex(unsigned int index)
{
	if (index < 0 || index > 7 || index > position - 1)
		return (false);
	return (true);
}

void	PhoneBook::AddContact(
		std::string firstname, 
		std::string lastname,
		std::string	nickname,
		std::string	phonenumber,
		std::string darkestsecret)
{
	contact[position % 8].set_firstname(firstname);
	contact[position % 8].set_lastname(lastname);
	contact[position % 8].set_nickname(nickname);
	contact[position % 8].set_phonenumber(phonenumber);
	contact[position % 8].set_darkestsecret(darkestsecret);
	position++;
}

std::string	PhoneBook::AddFirstname()
{
	std::string string;
	
	Output::PromptFirstname();
	string = Input::ScanString();
	if (!Helper::ValidFirstname(string))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Firstname"));
		return(AddFirstname());
	}
	return (string);
}

std::string	PhoneBook::AddLastname()
{
	std::string string;
	
	Output::PromptLastname();
	string = Input::ScanString();
	if (!Helper::ValidLastname(string))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Lastname"));
		return(AddLastname());
	}
	return (string);
}

std::string	PhoneBook::AddNickname()
{
	std::string string;
	
	Output::PromptNickname();
	string = Input::ScanString();
	if (!Helper::ValidNickname(string))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Nickname"));
		return(AddNickname());
	}
	return (string);
}

std::string	PhoneBook::AddPhonenumber()
{
	std::string string;
	
	Output::PromptPhonenumber();
	string = Input::ScanString();
	if (!Helper::ValidPhonenumber(string))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Phonenumber"));
		return(AddPhonenumber());
	}
	return (string);
}

std::string	PhoneBook::AddDarkestsecret()
{
	std::string string;
	
	Output::PromptDarkestsecret();
	string = Input::ScanString();
	if (!Helper::ValidDarkestsecret(string))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Darkestsecret"));
		return(AddDarkestsecret());
	}
	return (string);
}

void	PhoneBook::Add(void)
{
	PhoneBook::AddContact(
		AddFirstname(),
		AddLastname(),
		AddNickname(),
		AddPhonenumber(),
		AddDarkestsecret()
	);
}

unsigned int	PhoneBook::IndexSearch(void)
{
	unsigned int	index;
	
	Output::PromptIndex();
	index = Input::ScanIndex();
	if (!ValidIndex(index))
	{
		Output::PrintStringEndl(std::string("Error: Invalid Index."));
		return (IndexSearch());
	}
	return (index);
}

void PhoneBook::Search(void)
{
	DisplayPhoneBook();
	DisplayContact(IndexSearch());
}

void PhoneBook::DisplayContact(int i)
{
	Output::PrintString(std::string("Firstname: "));
	Output::PrintStringEndl(contact[i].get_firstname());
	Output::PrintString("Lastname: ");
	Output::PrintStringEndl(contact[i].get_lastname());
	Output::PrintString("Nickname: ");
	Output::PrintStringEndl(contact[i].get_nickname());
	Output::PrintString("Phonenumber: ");
	Output::PrintStringEndl(contact[i].get_phonenumber());
	Output::PrintString("Darkestsecret: ");
	Output::PrintStringEndl(contact[i].get_darkestsecret());	
}

void PhoneBook::DisplayContactColumns(int i)
{
	std::cout << std::setw(10) << std::right << i;
	Output::PrintString(std::string(" | "));	
	Output::PrintColumn(contact[i].get_firstname());
	Output::PrintString(std::string(" | "));	
	Output::PrintColumn(contact[i].get_lastname());
	Output::PrintString(std::string(" | "));	
	Output::PrintColumn(contact[i].get_nickname());
	std::cout << std::endl;
}

void PhoneBook::DisplayHeader(void)
{
	Output::PrintColumn(std::string("Index"));
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(std::string("First Name"));
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(std::string("Last Name"));
	Output::PrintString(std::string(" | "));
	Output::PrintColumn(std::string("Nickname"));
	Output::PrintStringEndl(std::string(""));
}

void PhoneBook::DisplayPhoneBook(void)
{
	DisplayHeader();
	for (unsigned int i = 0; i < position; i++)
	{
		if (i == 8)
			break ;
		DisplayContactColumns(i);		
	}
}
