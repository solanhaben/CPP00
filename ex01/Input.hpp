/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:55:43 by fbindere          #+#    #+#             */
/*   Updated: 2022/05/06 16:39:19 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_HPP
# define INPUT_HPP

#include <string>
#include <iostream>

typedef enum e_cmd
{
	ADD,
	SEARCH,
	EXIT,
	ERROR
}			t_cmd;

namespace Input
{
	std::string ScanString();
	t_cmd		ScanCommand();
	int			ScanIndex();
}

#endif