/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotCaseString.operator.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:11 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:44:43 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotCaseString.hpp"

bool	fnx::operator==	(const fnx::NotCaseString & lhs
					,const fnx::NotCaseString & rhs)
{
	return (lhs.compare(rhs) == 0);
}

bool	fnx::operator==	(const char * lhs
					,const fnx::NotCaseString & rhs)
{
	return (rhs.compare(lhs) == 0);
}

bool	fnx::operator==	(const fnx::NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) == 0);
}

bool 	fnx::operator!=	(const fnx::NotCaseString & lhs
					,const fnx::NotCaseString & rhs)
{
	return (lhs.compare(rhs) != 0);
}

bool 	fnx::operator!=	(const char * lhs
					,const fnx::NotCaseString & rhs)
{
	return (rhs.compare(lhs) != 0);
}

bool 	fnx::operator!=	(const fnx::NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) != 0);
}

bool 	fnx::operator<	(const fnx::NotCaseString & lhs
					,const fnx::NotCaseString & rhs)
{
	return (lhs.compare(rhs) < 0);
}

bool 	fnx::operator<	(const char * lhs
					,const fnx::NotCaseString & rhs)
{
	return (rhs.compare(lhs) > 0);
}

bool 	fnx::operator<	(const fnx::NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) < 0);
}

bool 	fnx::operator<=	(const fnx::NotCaseString & lhs
					,const fnx::NotCaseString & rhs)
{
	return (lhs.compare(rhs) <= 0);
}

bool 	fnx::operator<=	(const char * lhs
					,const fnx::NotCaseString & rhs)
{
	return (rhs.compare(lhs) >= 0);
}

bool 	fnx::operator<=	(const fnx::NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) <= 0);
}

bool 	fnx::operator>	(const fnx::NotCaseString & lhs
					,const fnx::NotCaseString & rhs)
{
	return (lhs.compare(rhs) > 0);
}

bool 	fnx::operator>	(const char * lhs
					,const fnx::NotCaseString & rhs)
{
	return (rhs.compare(lhs) < 0 );
}

bool 	fnx::operator>	(const fnx::NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) > 0);
}

bool 	fnx::operator>=	(const fnx::NotCaseString & lhs
					,const fnx::NotCaseString & rhs)
{
	return (lhs.compare(rhs) >= 0);
}

bool 	fnx::operator>=	(const char * lhs
					,const fnx::NotCaseString & rhs)
{
	return (rhs.compare(lhs) <= 0);
}

bool 	fnx::operator>=	(const fnx::NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) >= 0);
}
