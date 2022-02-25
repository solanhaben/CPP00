/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Manager.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:22:26 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 17:01:25 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANAGER_HPP
# define MANAGER_HPP
# include "PhoneBook.hpp"
# include "Input.hpp"
# include "Output.hpp"

class Manager
{
	private:
		PhoneBook		phonebook;
		Input			input;
		Output			output;
		void			add();
		void			search();
		std::string		add_firstname();
		std::string		add_lastname();
		std::string		add_nickname();
		std::string		add_phonenumber();
		std::string		add_darkestsecret();
		int				get_index();
	public:
		Manager();
		~Manager();
		void			start();
};

#endif 
