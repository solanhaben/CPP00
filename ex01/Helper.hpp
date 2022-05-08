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