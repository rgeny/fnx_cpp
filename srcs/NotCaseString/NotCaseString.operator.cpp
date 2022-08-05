/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotCaseString.operator.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:11 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:55:21 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

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
