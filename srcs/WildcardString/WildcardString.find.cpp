/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.find.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:36:06 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/12 11:27:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

size_t	fnx::WildcardString::find	(fnx::WildcardString const & str,
									 size_t pos) const
{
	return (this->find(str.c_str(), pos, std::max(str.size(), this->size())));
}

size_t	fnx::WildcardString::find	(char const * s,
									 size_t pos) const
{
	return (this->find(s, pos, std::max(strlen(s), this->size())));
}

size_t	fnx::WildcardString::find	(char const * s,
									 size_t pos,
									 size_t n) const
{
	size_t	this_size	= this->size();
	
	for (; pos < this_size; pos++)
	{
		if (this->compare(pos, n, s, n) == 0)
			return (pos);
	}
	return (std::string::npos);
}

size_t	fnx::WildcardString::find	(char c,
									 size_t pos) const
{
	fnx::WildcardString	tmp(size_t(1), c);
	return (this->find(tmp.c_str(), pos, tmp.size()));
}
