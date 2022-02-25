/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:47:28 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 17:21:37 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_HPP
# define INPUT_HPP
# include "Command.hpp"
# include <iostream>
# include <string>

class Input
{
	private:
		std::string scan_string();
		bool scan_int(int &integer);
	public:
		Input();
		~Input();
	Command	scan_command();
	std::string scan_firstname();
	std::string scan_lastname();
	std::string scan_nickname();
	std::string scan_phonenumber();
	std::string scan_darkestsecret();
	int			scan_index();
};


#endif 