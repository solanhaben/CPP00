/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:20:01 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 17:23:07 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Output.hpp"

void Output::PromptIndex(void)
{
	PrintString(std::string("Enter index to see a contact's details: "));
}

void Output::PrintColumn(std::string string)
{
	std::string truncString;
	
	truncString = Helper::Truncate(string);
	std::cout << std::setw(10) << std::right << truncString;
}

void	Output::PrintStringEndl(std::string string)
{
	std::cout << string << std::endl;
}

void	Output::PrintString(std::string string)
{
	std::cout << string;
}

void	Output::PromptFirstname()
{
	PrintString(std::string("Enter Firstname: "));	
}

void	Output::PromptLastname()
{
	PrintString(std::string("Enter Lastname: "));	
}

void	Output::PromptNickname()
{
	PrintString(std::string("Enter Nickname: "));	
}

void	Output::PromptDarkestsecret()
{
	PrintString(std::string("Enter Darkestsecret: "));	
}

void	Output::PromptPhonenumber()
{
	PrintString(std::string("Enter Phonenumber: "));	
}

void	Output::PromptCommand()
{
	PrintString(std::string("Enter Command: "));	
}
