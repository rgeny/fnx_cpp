/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.compare.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:41:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/25 13:54:19 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"
#include <stdexcept>

int		fnx::WildcardString::compare	(fnx::WildcardString const & str) const
{
	return (this->compare(0, this->size(), str, 0, str.size()));
}

int		fnx::WildcardString::compare	(size_t pos,
										 size_t len,
										 fnx::WildcardString const & str) const
{
	return (this->compare(pos, len, str, 0, str.size()));
}

int	fnx::WildcardString::compare	(size_t pos,
									 size_t len,
									 fnx::WildcardString const & str,
									 size_t subpos,
									 size_t sublen) const
{
	if (pos > this->size())
		throw (std::out_of_range("fnx::WildcardString::compare (size_t pos, size_t len, fnx::WildcardString const & str, size_t subpos, size_t sublen) const :\npos > this->size()"));
	else if (subpos > str.size())
		throw (std::out_of_range("fnx::WildcardString::compare (size_t pos, size_t len, fnx::WildcardString const & str, size_t subpos, size_t sublen) const :\nsubpos > str->size()"));
	#ifdef FNX_DEBUG
	std::cout	<< "len    = "
				<< len
				<< std::endl
				<< "sublen = "
				<< sublen
				<< std::endl
				<< std::endl;
	#endif

	len = std::min(len, this->size() - pos);
	sublen = std::min(sublen, str.size() - subpos);
	size_t	end = std::min(len + pos, this->size()),
			subend = std::min(sublen + subpos, str.size());
	(void)end;
	(void)subend;

	#ifdef FNX_DEBUG
	if (this->size() <= 100)
	{
		std::cout	<< "this   = \""
					<< *this
					<< "\""
					<< std::endl;
	}
	std::cout	<< "pos    = "
				<< pos
				<< std::endl
				<< "len    = "
				<< len
				<< std::endl
				<< "end    = "
				<< end
				<< std::endl
				<< std::endl;
	if (str.size() <= 100)
	{
		std::cout	<< "str    = \""
					<< str
					<< "\""
					<< std::endl;
	}
	std::cout	<< "subpos = "
				<< subpos
				<< std::endl
				<< "sublen = "
				<< sublen
				<< std::endl
				<< "subend = "
				<< subend
				<< std::endl;
	#endif

	fnx::WildcardString const & ref = *this;
	(void)ref;
	
	size_t	ref_esc_n = 0,
			str_esc_n = 0;
	bool	ref_esc = false,
			str_esc = false;
	
	(void)ref_esc_n;
	(void)str_esc_n;
	(void)ref_esc;
	(void)str_esc;

//	std::cout	<< "previous len = "
//				<< end + 1 - pos
//				<< std::endl
//				<< "previous sublen = "
//				<< subend + 1 - subpos
//				<< std::endl
//				<< std::endl;
	
	std::vector< std::vector<bool> >	lookup;
	lookup.resize(len + 1);
	for (size_t i = 0; i <= end; i++)
		lookup[i].resize(sublen + 1);
	lookup[0][0] = true;

	for (size_t i = 1; i <= len; i++)
		if (ref[i - 1] == INFINITY_WILDCARD)
			lookup[i][0] = lookup[i - 1][0];
	for (size_t j = 1; j <= sublen; j++)
		if (str[j - 1] == INFINITY_WILDCARD)
			lookup[0][j] = lookup[0][j - 1];
	
	for (size_t i = pos; i < len; i++)
	{
		if (ref[i] == ESCAPE_WILDCARD)
		{
			i++;
			ref_esc = true;
			ref_esc_n++;
		}
		str_esc_n = 0;
		for (size_t j = subpos; j < sublen; j++)
		{
			if (str[j] == ESCAPE_WILDCARD)
			{
				j++;
				str_esc = true;
				str_esc_n++;
			}
			if ((!str_esc && str[j] == INFINITY_WILDCARD) ||
				 (!ref_esc && ref[i] == INFINITY_WILDCARD))
			{
				
				lookup[i - ref_esc_n - pos + 1][j - str_esc_n - subpos + 1]
					= lookup[i - ref_esc_n - pos + 1][j - str_esc_n - subpos] ||
					  lookup[i - ref_esc_n - pos][j - str_esc_n - subpos + 1];
			}
			else if ((!str_esc && str[j] == ONE_CHAR_WILDCARD) ||
					 (!ref_esc && ref[i] == ONE_CHAR_WILDCARD) ||
					 ref[i] == str[j])
			{
				lookup[i - ref_esc_n - pos + 1][j - str_esc_n - subpos + 1] =
					lookup[i - ref_esc_n - pos][j - str_esc_n - subpos];
			}
			str_esc = false;
		}
		ref_esc = false;
	}

//	for (size_t i = pos + 1; i <= len; i++)
//	{
//		if (ref[i - 1] == ESCAPE_WILDCARD)
//		{
//			i++;
//			ref_esc = true;
//			ref_esc_n++;
//		}
//		str_esc_n = 0;
//		for (size_t j = subpos + 1; j <= sublen; j++)
//		{
//			if (str[j - 1] == ESCAPE_WILDCARD)
//			{
//				j++;
//				str_esc = true;
//				str_esc_n++;
//			}
//			if ((!str_esc && str[j - 1] == INFINITY_WILDCARD) ||
//				 (!ref_esc && ref[i - 1] == INFINITY_WILDCARD))
//			{
//				lookup[i - ref_esc_n - pos][j - str_esc_n - subpos] = lookup[i - ref_esc_n - pos][j - 1 - str_esc_n - subpos] || lookup[i - 1 - ref_esc_n - pos][j - str_esc_n - subpos];
//			}
//			else if ((!str_esc && str[j - 1] == ONE_CHAR_WILDCARD) ||
//					 (!ref_esc && ref[i - 1] == ONE_CHAR_WILDCARD) ||
//					 ref[i - 1] == str[j - 1])
//			{
//				lookup[i - ref_esc_n - pos][j - str_esc_n - subpos] = lookup[i - 1 - ref_esc_n - pos][j - 1 - str_esc_n - subpos];
//			}
//			str_esc = false;
//		}
//		ref_esc = false;
//	}


	#ifdef FNX_DEBUG
	if (this->size() <= 45 && str.size() <= 45)
	{
		std::cout	<< UNDERSCORE "lookup tab :" RESET
					<< std::endl;
		for (size_t i = 0; i <= end; i++)
		{
			for (size_t j = 0; j <= subend; j++)
				std::cout	<< lookup[i][j]
							<< " ";
			std::cout	<< std::endl;
		}
		std::cout	<< "ref_esc_n = "
					<< ref_esc_n
					<< std::endl
					<< "str_esc_n = "
					<< str_esc_n
					<< std::endl;

	std::cout	<< "len - ref_esc_n - pos = "
				<< len - ref_esc_n - pos
				<< std::endl
				<< "sublen - str_esc_n - subpos = "
				<< sublen - str_esc_n - subpos
				<< std::endl;
	}
	#endif

	if (lookup[len - ref_esc_n][sublen - str_esc_n] == false)
	{
		size_t	i;
		for (i = 0; i < len && i < sublen; i++)
		{
			if (ref[i] != str[i])
				return (ref[i] - str[i]);
		}
	}
	return (!lookup[len -  ref_esc_n - pos][sublen - str_esc_n - subpos]);


//	if (lookup[len - ref_esc_n - pos][sublen - str_esc_n - subpos] == false)
//	{
//		size_t	i;
//		for (i = 0; i < len && i <sublen; i++)
//		{
//			if (ref[i] != str[i])
//				return (ref[i] - str[i]);
//		}
//	}
//	return (!lookup[len -  ref_esc_n - pos][sublen - str_esc_n - subpos]);



//	std::cout	<< std::endl
//				<< "len before = "
//				<< len
//				<< std::endl
//				<< "sublen before = "
//				<< sublen
//				<< std::endl;
//	len = std::min(len + pos, this->size());
//	sublen = std::min(sublen + subpos, str.size());
//	fnx::WildcardString const &	ref = *this;
//
//	std::cout	<< "pos = "
//				<< pos
//				<< std::endl
//				<< "len after = "
//				<< len
//				<< std::endl
//				<< "subpos = "
//				<< subpos
//				<< std::endl
//				<< "sublen after = "
//				<< sublen
//				<< std::endl;
//
//	init escape wildcard variables
//	size_t	ref_esc_n = 0,
//			str_esc_n = 0;
//	bool	ref_esc = false,
//			str_esc = false;
//
//	std::vector<std::vector<bool> >	lookup;
//
//	init boolean tab
//	lookup.resize(len + 1 - pos);
//	for (size_t i = 0; i <= (len - pos); i++)
//		lookup[i].resize(sublen + 1);
//	lookup[0][0] = true;
//
//	init first column of boolean tab
//	for (size_t i = 1; i <= len - pos; i++)
//		if (ref[i - 1] == INFINITY_WILDCARD)
//			lookup[i][0] = lookup[i - 1][0];
//	init first line of boolean tab
//	for (size_t j = 1; j <= sublen - subpos; j++)
//		if (str[j - 1] == INFINITY_WILDCARD)
//			lookup[0][j] = lookup[0][j - 1];
//
//
//	fill boolean tab
//	for (size_t i = pos + 1; i <= len; i++)
//	{
//		if (ref[i - 1] == ESCAPE_WILDCARD)
//		{
//			i++;
//			ref_esc = true;
//			ref_esc_n++;
//		}
//		str_esc_n = 0;
//		for (size_t j = subpos + 1; j <= sublen; j++)
//		{
//			if (str[j - 1] == ESCAPE_WILDCARD)
//			{
//				j++;
//				str_esc = true;
//				str_esc_n++;
//			}
//			if ((!str_esc && str[j - 1] == INFINITY_WILDCARD) ||
//				 (!ref_esc && ref[i - 1] == INFINITY_WILDCARD))
//			{
//				lookup[i - ref_esc_n - pos][j - str_esc_n - subpos] = lookup[i - ref_esc_n - pos][j - 1 - str_esc_n - subpos] || lookup[i - 1 - ref_esc_n - pos][j - str_esc_n - subpos];
//			}
//			else if ((!str_esc && str[j - 1] == ONE_CHAR_WILDCARD) ||
//					 (!ref_esc && ref[i - 1] == ONE_CHAR_WILDCARD) ||
//					 ref[i - 1] == str[j - 1])
//			{
//				lookup[i - ref_esc_n - pos][j - str_esc_n - subpos] = lookup[i - 1 - ref_esc_n - pos][j - 1 - str_esc_n - subpos];
//			}
//			str_esc = false;
//		}
//		ref_esc = false;
//	}
//	for (size_t i = 0; i <= len - pos; i++)
//	{
//		for (size_t j = 0; j <= sublen - subpos; j++)
//			std::cout	<< lookup[i][j]
//						<< " ";
//		std::cout	<< std::endl;
//	}
//	std::cout	<< "ref_esc_n = "
//				<< ref_esc_n
//				<< std::endl
//				<< "str_esc_n = "
//				<< str_esc_n
//				<< std::endl;
//	if (lookup[len - ref_esc_n - pos][sublen - str_esc_n - subpos] == false)
//	{
//		size_t	i;
//		for (i = 0; i < len && i <sublen; i++)
//		{
//			if (ref[i] != str[i])
//				return (ref[i] - str[i]);
//		}
//	}
//	return (!lookup[len -  ref_esc_n - pos][sublen - str_esc_n - subpos]);
}

int		fnx::WildcardString::compare	(char const * s) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(0, this->size(), tmp, 0, tmp.size()));
}

int		fnx::WildcardString::compare	(size_t pos,
										 size_t len,
										 const char * s) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(pos, len, tmp, 0, tmp.size()));

}

int		fnx::WildcardString::compare	(size_t pos,
										 size_t len,
										 char const * s,
										 size_t n) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(pos, len, tmp, 0, n));
}
