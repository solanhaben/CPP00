/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Library.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbindere <fbindere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:05:26 by fbindere          #+#    #+#             */
/*   Updated: 2022/02/25 17:00:50 by fbindere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_HPP
# define LIBRARY_HPP
# include <string>

namespace Library
{
	bool		is_alpha(char letter);
	bool		striteri(std::string str, bool(*funct)(char));
	bool		striteri(std::string str, int(*funct)(int));
	std::string	truncate(std::string str, size_t size);
};

#endif 