/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:38:30 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 15:29:56 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

std::string	Contact::get_firstname()
{
	return (firstname);
}

std::string	Contact::get_lastname()
{
	return (lastname);
}

std::string	Contact::get_phonenumber()
{
	return (phonenumber);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_darkestsecret()
{
	return (darkestsecret);
}

void	Contact::set_firstname(std::string firstname)
{
	this->firstname = firstname;
}

void	Contact::set_lastname(std::string lastname)
{
	this->lastname = lastname;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phonenumber(std::string phonenumber)
{
	this->phonenumber = phonenumber;
}

void	Contact::set_darkestsecret(std::string darkestsecret)
{
	this->darkestsecret = darkestsecret;
}
