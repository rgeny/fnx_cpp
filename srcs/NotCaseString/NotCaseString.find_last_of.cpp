/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.find_last_of.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:22:47 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/01 17:02:55 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotCaseString.hpp"

size_t	fnx::NotCaseString::find_last_of	(const fnx::NotCaseString & str
								,size_t pos) const
{
	return (this->find_last_of(str.c_str(), pos, str.size()));
}

size_t	fnx::NotCaseString::find_last_of	(const char * s
								,size_t pos) const
{
	return (this->find_last_of(s, pos, strlen(s)));
}

size_t	fnx::NotCaseString::find_last_of	(const char * s
								,size_t pos
								,size_t n) const
{
	size_t	s_size		= std::min(strlen(s), n),
			this_size	= std::min(this->size(), pos);

	if (this_size > 0 && this_size != pos)
		this_size--;
	for (size_t i = this_size; i <= this_size; i--)
	{
		for (size_t j = 0; j < s_size; j++)
		{
			if (this->compare(i, 1,s + j, 1) == 0)
				return (i);
		}
	}
	return (std::string::npos);
}

size_t	fnx::NotCaseString::find_last_of	(char c
								,size_t pos) const
{
	fnx::NotCaseString	tmp(1, c);
	return (this->find_last_of(tmp.c_str(), pos, 1));
}
