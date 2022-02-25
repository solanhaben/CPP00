/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:47:44 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 17:01:59 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_HPP
# define OUTPUT_HPP
# include <string>
# include "Contact.hpp"
# include "PhoneBook.hpp"
# include <iostream>

class Output
{
	private:
		void	print_message(std::string str);
	public:
		Output();
		~Output();
		void	print_invalidiput();
		void	prompt_firstname();
		void	prompt_lastname();
		void	prompt_nickname();
		void	prompt_phonenumber();
		void	prompt_darkestsecret();
		void	prompt_index();
		void	prompt_command();
		void	print_contact(Contact contact);
		void	print_phonebook(PhoneBook phonebook);
};

#endif 