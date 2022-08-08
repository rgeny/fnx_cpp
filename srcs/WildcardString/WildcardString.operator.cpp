/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.operator.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:11 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 12:25:55 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

bool	fnx::operator==	(const fnx::WildcardString & lhs,
						 const fnx::WildcardString & rhs)
{
	return (lhs.compare(rhs) == 0);
}

bool	fnx::operator==	(const char * lhs,
						 const fnx::WildcardString & rhs)
{
	return (rhs.compare(lhs) == 0);
}

bool	fnx::operator==	(const fnx::WildcardString & lhs,
						 const char * rhs)
{
	return (lhs.compare(rhs) == 0);
}

bool 	fnx::operator!=	(const fnx::WildcardString & lhs,
						 const fnx::WildcardString & rhs)
{
	return (lhs.compare(rhs) != 0);
}

bool 	fnx::operator!=	(const char * lhs,
						 const fnx::WildcardString & rhs)
{
	return (rhs.compare(lhs) != 0);
}

bool 	fnx::operator!=	(const fnx::WildcardString & lhs,
						 const char * rhs)
{
	return (lhs.compare(rhs) != 0);
}

bool 	fnx::operator<	(const fnx::WildcardString & lhs,
						 const fnx::WildcardString & rhs)
{
	return (lhs.compare(rhs) < 0);
}

bool 	fnx::operator<	(const char * lhs,
						 const fnx::WildcardString & rhs)
{
	return (rhs.compare(lhs) > 0);
}

bool 	fnx::operator<	(const fnx::WildcardString & lhs,
						 const char * rhs)
{
	return (lhs.compare(rhs) < 0);
}

bool 	fnx::operator<=	(const fnx::WildcardString & lhs,
						 const fnx::WildcardString & rhs)
{
	return (lhs.compare(rhs) <= 0);
}

bool 	fnx::operator<=	(const char * lhs,
						 const fnx::WildcardString & rhs)
{
	return (rhs.compare(lhs) >= 0);
}

bool 	fnx::operator<=	(const fnx::WildcardString & lhs,
						 const char * rhs)
{
	return (lhs.compare(rhs) <= 0);
}

bool 	fnx::operator>	(const fnx::WildcardString & lhs,
						 const fnx::WildcardString & rhs)
{
	return (lhs.compare(rhs) > 0);
}

bool 	fnx::operator>	(const char * lhs,
						 const fnx::WildcardString & rhs)
{
	return (rhs.compare(lhs) < 0 );
}

bool 	fnx::operator>	(const fnx::WildcardString & lhs,
						 const char * rhs)
{
	return (lhs.compare(rhs) > 0);
}

bool 	fnx::operator>=	(const fnx::WildcardString & lhs,
						 const fnx::WildcardString & rhs)
{
	return (lhs.compare(rhs) >= 0);
}

bool 	fnx::operator>=	(const char * lhs,
						 const fnx::WildcardString & rhs)
{
	return (rhs.compare(lhs) <= 0);
}

bool 	fnx::operator>=	(const fnx::WildcardString & lhs,
						 const char * rhs)
{
	return (lhs.compare(rhs) >= 0);
}
