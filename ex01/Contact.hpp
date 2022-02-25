/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:40:37 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 17:49:59 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include "Library.hpp"

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string darkestsecret;
	public:
		Contact();
		~Contact();
		bool		set_firstname(std::string firstname);
		bool		set_lastname(std::string lastname);
		bool		set_nickname(std::string nickname);
		bool		set_phonenumber(std::string phonenumber);
		bool		set_darkestsecret(std::string darkestsecret);
		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_phonenumber();
		std::string	get_darkestsecret();
		static bool	valid_firstname(std::string firstname);
		static bool	valid_lastname(std::string lastname);
		static bool	valid_nickname(std::string nickname);
		static bool	valid_phonenumber(std::string phonenumber);
		static bool	valid_darkestsecret(std::string darkestsecret);
};

std::ostream& operator<<(std::ostream& os,  Contact  &contact);

#endif 