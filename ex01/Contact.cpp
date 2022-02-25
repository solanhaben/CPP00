/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:40:59 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 21:08:17 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::set_firstname(std::string firstname)
{
	this->firstname = firstname;
	return (true);
}

bool	Contact::set_lastname(std::string lastname)
{
	this->lastname = lastname;
	return (true);
}

bool	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
	return (true);
}

bool	Contact::set_phonenumber(std::string phonenumber)
{
	this->phonenumber = phonenumber;
	return (true);
}

bool	Contact::set_darkestsecret(std::string darkestsecret)
{
	this->darkestsecret = darkestsecret;
	return (true);
}

std::string	Contact::get_firstname(void)
{
	return(firstname);
}

std::string	Contact::get_lastname(void)
{
	return(lastname);
}

std::string	Contact::get_nickname(void)
{
	return(nickname);
}

std::string	Contact::get_phonenumber(void)
{
	return(phonenumber);
}

std::string	Contact::get_darkestsecret(void)
{
	return(darkestsecret);
}

bool	Contact::valid_firstname(std::string firstname)
{
	return (Library::striteri(firstname, Library::is_alpha));
}

bool	Contact::valid_lastname(std::string lastname)
{
	return (Library::striteri(lastname, Library::is_alpha));
}

bool	Contact::valid_nickname(std::string nickname)
{
	return (Library::striteri(nickname, std::isalnum));
}

bool	Contact::valid_phonenumber(std::string phonenumber)
{
	return (Library::striteri(phonenumber, std::isdigit));
}

bool	Contact::valid_darkestsecret(std::string darkestsecret)
{
	return (Library::striteri(darkestsecret, std::isprint));
}

std::ostream& operator<<(std::ostream& os,  Contact  &contact)
{
    os << "Firstname:\t" << contact.get_firstname() << std::endl;
    os << "Lastname:\t" << contact.get_lastname() << std::endl;
    os << "Nickname:\t" << contact.get_nickname() << std::endl;
    os << "Phonenumber:\t" << contact.get_phonenumber() << std::endl;
    os << "Darkest Secret:\t" << contact.get_darkestsecret() << std::endl;
    return (os);
}

Contact::Contact() :
firstname(),
lastname(),
nickname(),
phonenumber(),
darkestsecret()
{
}

Contact::~Contact()
{
}