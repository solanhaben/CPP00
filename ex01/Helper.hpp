/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:05:27 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 18:17:35 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_HPP
# define HELPER_HPP

#include <string>

namespace Helper
{
	std::string Truncate(std::string);
	bool		Iterate(std::string string, int (&function)(int));
	bool		ValidFirstname(std::string firstname);
	bool		ValidLastname(std::string lastname);
	bool		ValidNickname(std::string nickname);
	bool		ValidPhonenumber(std::string phonenumber);
	bool		ValidDarkestsecret(std::string darkestsecret);
} 

#endif