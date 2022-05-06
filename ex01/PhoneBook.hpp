/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:04:29 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 18:18:53 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Output.hpp"
#include "Input.hpp"
#include "Helper.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class PhoneBook
{
	private:
		Contact 		contact[8];
		unsigned int	position;
	public:
		PhoneBook();
		~PhoneBook();
		void Add(void);
		void Search(void);
		void AddContact(std::string firstname, 
						std::string lastname,
						std::string	nickname,
						std::string	phonenumber,
						std::string darkestsecret);
		std::string	AddFirstname();
		std::string	AddLastname();
		std::string	AddNickname();
		std::string	AddPhonenumber();
		std::string	AddDarkestsecret();
		void DisplayPhoneBook(void);
		void DisplayContactColumns(int i);
		void DisplayHeader(void);
		unsigned int	IndexSearch(void);
		void DisplayContact(int i);
		bool ValidIndex(unsigned int index);
};

#endif