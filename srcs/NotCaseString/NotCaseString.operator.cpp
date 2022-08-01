/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.operator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:11 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/01 17:02:59 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotCaseString.hpp"

bool	operator==	(const NotCaseString & lhs
					,const NotCaseString & rhs)
{
	return (lhs.compare(rhs) == 0);
}

bool	operator==	(const char * lhs
					,const NotCaseString & rhs)
{
	return (rhs.compare(lhs) == 0);
}

bool	operator==	(const NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) == 0);
}

bool 	operator!=	(const NotCaseString & lhs
					,const NotCaseString & rhs)
{
	return (lhs.compare(rhs) != 0);
}

bool 	operator!=	(const char * lhs
					,const NotCaseString & rhs)
{
	return (rhs.compare(lhs) != 0);
}

bool 	operator!=	(const NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) != 0);
}

bool 	operator<	(const NotCaseString & lhs
					,const NotCaseString & rhs)
{
	return (lhs.compare(rhs) < 0);
}

bool 	operator<	(const char * lhs
					,const NotCaseString & rhs)
{
	return (rhs.compare(lhs) > 0);
}

bool 	operator<	(const NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) < 0);
}

bool 	operator<=	(const NotCaseString & lhs
					,const NotCaseString & rhs)
{
	return (lhs.compare(rhs) <= 0);
}

bool 	operator<=	(const char * lhs
					,const NotCaseString & rhs)
{
	return (rhs.compare(lhs) >= 0);
}

bool 	operator<=	(const NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) <= 0);
}

bool 	operator>	(const NotCaseString & lhs
					,const NotCaseString & rhs)
{
	return (lhs.compare(rhs) > 0);
}

bool 	operator>	(const char * lhs
					,const NotCaseString & rhs)
{
	return (rhs.compare(lhs) < 0 );
}

bool 	operator>	(const NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) > 0);
}

bool 	operator>=	(const NotCaseString & lhs
					,const NotCaseString & rhs)
{
	return (lhs.compare(rhs) >= 0);
}

bool 	operator>=	(const char * lhs
					,const NotCaseString & rhs)
{
	return (rhs.compare(lhs) <= 0);
}

bool 	operator>=	(const NotCaseString & lhs
					,const char * rhs)
{
	return (lhs.compare(rhs) >= 0);
}
