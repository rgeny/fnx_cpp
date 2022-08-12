/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.rfind.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:23:16 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/12 11:45:31 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

size_t	fnx::WildcardString::rfind	(const fnx::WildcardString & str,
									 size_t pos) const
{
	return (this->rfind(str.c_str(), pos, std::max(str.size(), this->size())));
}


size_t	fnx::WildcardString::rfind	(const char * s,
									 size_t pos) const
{
	return (this->rfind(s, pos, strlen(s)));
}

size_t	fnx::WildcardString::rfind	(const char * s,
									 size_t pos,
									 size_t n) const
{
	size_t	this_size	= std::min(this->size(), pos);

	for (size_t i = this_size; i <= this_size; i--)
	{
		if (this->compare(i, n, s, n) == 0)
			return (i);
	}
	return (std::string::npos);
}

size_t	fnx::WildcardString::rfind	(char c,
									 size_t pos) const
{
	fnx::WildcardString	tmp((size_t)1, c);
	return (this->rfind(tmp.c_str(), pos, std::min(tmp.size(), this->size())));
}
