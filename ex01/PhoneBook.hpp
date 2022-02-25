/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:32:10 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 20:53:47 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		position;
	public:
		PhoneBook();
		~PhoneBook();
		bool		add_contact(std::string firstname, std::string lastname,
						std::string nickname, std::string phonenumber,
						std::string darkestsecret);
		Contact		get_contact(int index);
		bool		check_contact(int index);
		static bool	valid_index(int	index);
};

std::ostream& operator<< (std::ostream& os, PhoneBook& phonebook);

#endif