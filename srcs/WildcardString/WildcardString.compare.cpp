/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.compare.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:41:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/10 17:57:29 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

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
	len = std::min(len + pos, this->size());
	sublen = std::min(sublen + subpos, str.size());
	fnx::WildcardString const &	ref = *this;

	std::vector<std::vector<bool> >	lookup;

//	init escape wildcard variables
	size_t	ref_esc_n = 0,
			str_esc_n = 0;
	bool	ref_esc = false,
			str_esc = false;

//	init boolean tab
	lookup.resize(len + 1);
	for (size_t i = 0; i <= len; i++)
		lookup[i].resize(sublen + 1);
	lookup[0][0] = true;

//	init first column of boolean tab
	for (size_t i = 1; i <= len; i++)
		if (ref[i - 1] == _inf_wc)
			lookup[i][0] = lookup[i - 1][0];
//	init first line of boolean tab
	for (size_t j = 1; j <= sublen; j++)
		if (str[j - 1] == str._inf_wc)
			lookup[0][j] = lookup[0][j - 1];


//	fill boolean tab
	for (size_t i = 1; i <= len; i++)
	{
		if (ref[i - 1] == _esc_wc)
		{
			i++;
			ref_esc = true;
			ref_esc_n++;
		}
		str_esc_n = 0;
		for (size_t j = 1; j <= sublen; j++)
		{
			if (str[j - 1] == str._esc_wc)
			{
				j++;
				str_esc = true;
				str_esc_n++;
			}
			if ((!str_esc && str[j - 1] == str._inf_wc) ||
				 (!ref_esc && ref[i - 1] == _inf_wc))
			{
				lookup[i - ref_esc_n][j - str_esc_n] = lookup[i - ref_esc_n][j - 1 - str_esc_n] || lookup[i - 1 - ref_esc_n][j - str_esc_n];
			}
			else if ((!str_esc && str[j - 1] == str._one_wc) ||
					 (!ref_esc && ref[i - 1] == _one_wc) ||
					 ref[i - 1] == str[j - 1])
			{
				lookup[i - ref_esc_n][j - str_esc_n] = lookup[i - 1 - ref_esc_n][j - 1 - str_esc_n];
			}
			str_esc = false;
		}
		ref_esc = false;
	}
//	for (size_t i = 0; i <= len; i++)
//	{
//		for (size_t j = 0; j <= sublen; j++)
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
	if (lookup[len - ref_esc_n][sublen - str_esc_n] == false)
	{
		size_t	i;
		for (i = 0; i < len && i <sublen; i++)
		{
			if (ref[i] != str[i])
				return (ref[i] - str[i]);
		}
	}
	return (!lookup[len -  ref_esc_n][sublen - str_esc_n]);
}

int		fnx::WildcardString::compare	(char const * s) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(0, this->size(), tmp, 0, tmp.size()));
}

int		fnx::WildcardString::compare	(size_t pos
						,size_t len
						,const char * s) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(pos, len, tmp, 0, tmp.size()));

}

int	fnx::WildcardString::compare	(size_t pos,
								 size_t len,
								 char const * s,
								 size_t n) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(pos, len, tmp, 0, n));
}
