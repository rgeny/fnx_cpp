/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.find.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:36:06 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/01 17:02:41 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotCaseString.hpp"

size_t	NotCaseString::find	(const NotCaseString & str
						,size_t pos) const
{
	return (this->find(str.c_str(), pos, str.size()));
}

size_t	NotCaseString::find	(const char * s
						,size_t pos) const
{
	return (this->find(s, pos, strlen(s)));
}

size_t	NotCaseString::find	(const char * s
						,size_t pos
						,size_t n) const
{
	size_t	this_size	= this->size();
	
	for (; pos < this_size; pos++)
	{
		if (this->compare(pos, n, s, n) == 0)
			return (pos);
	}
	return (std::string::npos);
}

size_t	NotCaseString::find	(char c
						,size_t pos) const
{
	NotCaseString	tmp(1, c);
	return (this->find(tmp.c_str(), pos, 1));
}