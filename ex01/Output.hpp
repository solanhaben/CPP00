/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:20:19 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 18:16:12 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_HPP
# define OUTPUT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Helper.hpp"

namespace Output
{
	void	PrintString(std::string string);
	void	PrintStringEndl(std::string string);
	void	PromptCommand();
	void	PromptFirstname();
	void	PromptLastname();
	void	PromptNickname();
	void	PromptDarkestsecret();
	void	PromptPhonenumber();
	void 	PrintColumn(std::string string);
	void	PromptIndex();
}

#endif