/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:06:41 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 18:31:06 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Input.hpp"
#include "Output.hpp"
#include "Contact.hpp"
#include <iostream>

int main(void)
{
	PhoneBook phonebook;

	while(1)
	{
		Output::PromptCommand();
		switch (Input::ScanCommand())
		{
			case ADD :
			{
				phonebook.Add();
				break ;
			}
			case SEARCH :
			{
				phonebook.Search();
				break ;
			}
			case EXIT :
				return (0);
			default:
				break;
		}
	}
	return (0);
}