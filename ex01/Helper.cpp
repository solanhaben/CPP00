#include "Helper.hpp"

std::string Helper::Truncate(std::string string)
{
	if (string.length() > 10)
		return (string.substr(0, 9) + ".");
	else
		return (string);
}

bool	Helper::Iterate(std::string string, int (&function)(int))
{
	for (size_t i = 0; i < string.length(); i++)
	{
		if (!function(string[i]) && string[i] != ' ')
			return (false);
	}
	return (true);
}

bool	Helper::ValidFirstname(std::string firstname)
{
	if (Iterate(firstname, isalpha))
		return (true);
	return (false);
}

bool	Helper::ValidLastname(std::string lastname)
{
	if (Iterate(lastname, isalpha))
		return (true);
	return (false);
}

bool	Helper::ValidNickname(std::string nickname)
{
	if (Iterate(nickname, isalpha))
		return (true);
	return (false);
}

bool	Helper::ValidPhonenumber(std::string phonenumber)
{
	if (Iterate(phonenumber, isdigit))
		return (true);
	return (false);
}

bool	Helper::ValidDarkestsecret(std::string darkestsecret)
{
	if (Iterate(darkestsecret, isalpha))
		return (true);
	return (false);
}
