/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.structor.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:00:24 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/12 11:45:08 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

fnx::WildcardString:: WildcardString	(void)
	:std::string()
{
//	std::cout	<< "WildcardString dfl constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const WildcardString & src)

	:std::string(src)
{
//	std::cout	<< "WildcardString cpy constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const WildcardString & str,
										 size_t pos,
										 size_t len)
	:std::string(str, pos, len)
{
//	std::cout	<< "WildcardString substring constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const std::string & str)
	:std::string(str)
{
//	std::cout	<< "WildcardString from std::string constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const char * s)
	:std::string(s)
{
//	std::cout	<< "WildcardString from c-string constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const char * s,
										 size_t n)
	:std::string(s, n)
{
//	std::cout	<< "WildcardString from sequence constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(size_t n,
										 char c)
	:std::string(n, c)
{
//	std::cout	<< "WildcardString fill constructor."
//				<< std::endl;
}

fnx::WildcardString::~WildcardString	(void)
{
//	std::cout	<< "WildcardString destructor."
//				<< std::endl;
}

