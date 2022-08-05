/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotCaseString.find_first_of.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:23:03 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:54:01 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

size_t	fnx::NotCaseString::find_first_of	(const fnx::NotCaseString & str
								,size_t pos) const
{
	return (this->find_first_of(str.c_str(), pos, str.size()));
}

size_t	fnx::NotCaseString::find_first_of	(const char * s
								,size_t pos) const
{
	return (this->find_first_of(s, pos, strlen(s)));
}


size_t	fnx::NotCaseString::find_first_of	(const char * s
								,size_t pos
								,size_t n) const
{
	size_t	s_size		= std::min(strlen(s), n),
			this_size	= this->size();

	for (; pos < this_size; pos++)
	{
		for (size_t j = 0; j < s_size; j++)
		{
			if (this->compare(pos, 1, s + j, 1) == 0)
				return (pos);
		}
	}
	return (std::string::npos);
}

size_t	fnx::NotCaseString::find_first_of	(char c
								,size_t pos) const
{
	fnx::NotCaseString	tmp(1, c);
	return (this->find_first_of(tmp.c_str(), pos, 1));
}
