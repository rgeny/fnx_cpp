/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.compare.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:41:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 18:57:39 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

bool	fnx::WildcardString::is_wildcard	(char const c) const
{
	return (c == _inf_wc || c == _one_wc || c == _esc_wc);
}

int		fnx::WildcardString::compare	(fnx::WildcardString const & str) const
{
	return (this->compare(0, this->size(), str, 0, str.size()));
}

int		fnx::WildcardString::compare	(size_t pos,
										 size_t len,
										 fnx::WildcardString const & str) const
{
	return (this->compare(pos, len, str, 0, str.size()));
}

//static bool	_is_valid_name	(fnx::WildcardString const & s1,
//							 size_t i,
//							 size_t len,
//							 fnx::WildcardString const & s2,
//							 size_t j,
//							 size_t & k,
//							 size_t sublen,
//							 size_t & l)
//{
//	for (l = 0;
//		 (i + k + l) < len &&
//		 (l == 0 ||
//		  !s1.is_wildcard(s1[i + k + l]));
//		 l++)
//	{
//		if (s1[i + k + l] != s2[j + k + l])
//			return (false);
//	}
//	if (s1.is_wildcard(s1[i + k + l]) ||
//		((i + k + l) == len &&
//		 (j + k + l) == sublen))
//	{
//		k += l;
//		return (true);
//	}
//	return (false);
//}

int	fnx::WildcardString::compare	(size_t pos,
									 size_t len,
									 fnx::WildcardString const & str,
									 size_t subpos,
									 size_t sublen) const
{
	len = std::min(len + pos, this->size());
	sublen = std::min(sublen + subpos, str.size());
	fnx::WildcardString const &	ref = *this;
	size_t	i, j;

	for (i = 0, j = 0;
		 i < len || j < sublen;)
	{
		if (ref[i] == _esc_wc &&
			str[j] == str._esc_wc)
		{
			i++;
			j++;
			if (ref[i] != str[j])
				return (ref[i] - str[j]);
		}
		else if (ref[i] == _esc_wc)
		{
			i++;
			if (ref[i] != str[j] && !str.is_wildcard(str[j]))
				return (ref[i] - str[j]);
		}
		else if (str[j] == str._esc_wc)
		{
			j++;
			if (str[j] != ref[i] && !this->is_wildcard(ref[i]))
				return (ref[i] - str[j]);
		}
		else if (ref[i] == _one_wc)
		{
			i++;
			if (j < sublen)
				j++;
		}
		else if (str[j] == str._one_wc)
		{
			j++;
			if (i < len)
				i++;
		}

		else if (ref[i] != str[j])
			return (ref[i] - str[j]);
		else
		{
			if (i < len)
				i++;
			if (j < sublen)
				j++;
		}
//		std::cout	<< "i = "
//					<< i
//					<< std::endl
//					<< "j = "
//					<< j
//					<< std::endl;
//		if (me[i] == _inf_wc)
//		{
//			std::cout	<< "before : "
//						<< i
//						<< std::endl;
//			i = me.find_first_not_of(_inf_wc, i);
//			std::cout	<< "after  : "
//						<< i
//						<< std::endl;
//			if (i == fnx::WildcardString::npos)
//				return (0);
//			size_t	k = str.find_first_of("*", i);
//			std::cout	<< "k : "
//						<< k
//						<< std::endl;
//		}
//		else if (str[j] == _inf_wc)
//		{
//			std::cout	<< "before(str) : "
//						<< j
//						<< std::endl;
//			j = str.find_first_not_of(_inf_wc, j);
//			std::cout	<< "after(str)  : "
//						<< j
//						<< std::endl;
//			if (j == fnx::WildcardString::npos)
//				return (0);
//			while (
//
//		}
//		else if (me[i] != str[j])
//			return (me[i] - str[j]);
//		else
//		{
//			i++;
//			j++;
//		}
	}
	
	return (ref[i] - str[j]);

//	return (me[i] - str[j]);

//	len = std::min(len + pos, this->size());
//	sublen = std::min(sublen + subpos, str.size());
//	size_t	i, j, k, l;
//
//	for (i = pos, j = subpos, k = 0, l = 0;
//		 (i + k) < len || (j + k) < sublen;)
//	{
//		if ((*this)[i + k] == _inf_wc)
//		{
//			while ((i + k) < len &&
//					(*this)[i + k] == _inf_wc)
//			{
//				i++;
//			}
//			while ((j + k) < sublen &&
//				   !_is_valid_name(*this, i, len, str, j, k, sublen, l))
//			{
//				j++;
//			}
//		}
//		else if (str[j + k] == _inf_wc)
//		{
//			while ((j + k) < sublen &&
//					str[j + k] == _inf_wc)
//			{
//				j++;
//			}
//			while ((i + k) < len &&
//					!_is_valid_name(str, j, sublen, *this, i, k, len, l))
//			{
//				i++;
//			}
//		}
//		else if (!_is_valid_name(*this, i, len, str, j, k, sublen, l) &&
//				 !_is_valid_name(str, j, sublen, *this, i, k, len, l))
//		{
//			return ((*this)[i + k + l] - str[j + k + l]);
//		}
//
//	}
//
//
//	return ((len - i) - (sublen - j));
}

int		fnx::WildcardString::compare	(char const * s) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(0, this->size(), tmp, 0, tmp.size()));
}

int		fnx::WildcardString::compare	(size_t pos
						,size_t len
						,const char * s) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(pos, len, tmp, 0, tmp.size()));

}

int	fnx::WildcardString::compare	(size_t pos,
								 size_t len,
								 char const * s,
								 size_t n) const
{
	fnx::WildcardString	tmp(s);
	return (this->compare(pos, len, tmp, 0, n));
}
