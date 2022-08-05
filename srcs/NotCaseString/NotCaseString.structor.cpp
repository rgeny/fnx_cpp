/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotCaseString.structor.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:00:24 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:55:31 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

std::vector<unsigned char>  fnx::NotCaseString::_case_off = NotCaseString::_init_case_off();

fnx::NotCaseString:: NotCaseString	(void)
	:std::string()
{
//	std::cout	<< "NotCaseString dfl constructor."
//				<< std::endl;
}

fnx::NotCaseString:: NotCaseString	(const NotCaseString & src)
	:std::string(src)
{
//	std::cout	<< "NotCaseString cpy constructor."
//				<< std::endl;
}

fnx::NotCaseString:: NotCaseString	(const NotCaseString & str
				,size_t pos
				,size_t len)
	:std::string(str, pos, len)
{
//	std::cout	<< "NotCaseString substring constructor."
//				<< std::endl;
}

fnx::NotCaseString:: NotCaseString	(const std::string & str)
	:std::string(str)
{
//	std::cout	<< "NotCaseString from std::string constructor."
//				<< std::endl;
}

fnx::NotCaseString:: NotCaseString	(const char * s)
	:std::string(s)
{
//	std::cout	<< "NotCaseString from c-string constructor."
//				<< std::endl;
}

fnx::NotCaseString:: NotCaseString	(const char * s
				,size_t n)
	:std::string(s, n)
{
//	std::cout	<< "NotCaseString from sequence constructor."
//				<< std::endl;
}

fnx::NotCaseString:: NotCaseString	(size_t n
				,char c)
	:std::string(n, c)
{
//	std::cout	<< "NotCaseString fill constructor."
//				<< std::endl;
}

fnx::NotCaseString::~NotCaseString	(void)
{
//	std::cout	<< "NotCaseString destructor."
//				<< std::endl;
}

