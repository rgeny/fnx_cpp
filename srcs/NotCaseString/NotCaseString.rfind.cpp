/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotCaseString.rfind.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:23:16 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:54:32 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

size_t	fnx::NotCaseString::rfind	(const fnx::NotCaseString & str
						,size_t pos) const
{
	return (this->rfind(str.c_str(), pos, str.size()));
}


size_t	fnx::NotCaseString::rfind	(const char * s
						,size_t pos) const
{
	return (this->rfind(s, pos, strlen(s)));
}

size_t	fnx::NotCaseString::rfind	(const char * s
						,size_t pos
						,size_t n) const
{
	size_t	this_size	= std::min(this->size(), pos);

	if (this_size > 0 && this_size != pos)
		this_size--;
	for (size_t i = this_size; i <= this_size; i--)
	{
		if (this->compare(i, n, s, n) == 0)
			return (i);
	}
	return (std::string::npos);
}

size_t	fnx::NotCaseString::rfind	(char c
						,size_t pos) const
{
	fnx::NotCaseString	tmp(1, c);
	return (this->rfind(tmp.c_str(), pos, 1));
}
