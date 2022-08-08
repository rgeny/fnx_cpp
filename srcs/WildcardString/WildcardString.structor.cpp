/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.structor.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:00:24 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 14:16:21 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

fnx::WildcardString:: WildcardString	(char const inf_wc,
										 char const one_wc,
										 char const esc_wc)
	:std::string(),
	 _inf_wc(inf_wc),
	 _one_wc(one_wc),
	 _esc_wc(esc_wc)

{
	_check_wildcard();
//	std::cout	<< "WildcardString dfl constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const WildcardString & src,
										 char const inf_wc,
										 char const one_wc,
										 char const esc_wc)

	:std::string(src),
	 _inf_wc(inf_wc),
	 _one_wc(one_wc),
	 _esc_wc(esc_wc)

{
	_check_wildcard();
//	std::cout	<< "WildcardString cpy constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const WildcardString & str,
										 size_t pos,
										 size_t len,
										 char const inf_wc,
										 char const one_wc,
										 char const esc_wc)
	:std::string(str, pos, len),
	 _inf_wc(inf_wc),
	 _one_wc(one_wc),
	 _esc_wc(esc_wc)

{
	_check_wildcard();
//	std::cout	<< "WildcardString substring constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const std::string & str,
										 char const inf_wc,
										 char const one_wc,
										 char const esc_wc)
	:std::string(str),
	 _inf_wc(inf_wc),
	 _one_wc(one_wc),
	 _esc_wc(esc_wc)

{
	_check_wildcard();
//	std::cout	<< "WildcardString from std::string constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const char * s,
										 char const inf_wc,
										 char const one_wc,
										 char const esc_wc)
	:std::string(s),
	 _inf_wc(inf_wc),
	 _one_wc(one_wc),
	 _esc_wc(esc_wc)

{
	_check_wildcard();
//	std::cout	<< "WildcardString from c-string constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(const char * s,
										 size_t n,
										 char const inf_wc,
										 char const one_wc,
										 char const esc_wc)
	:std::string(s, n),
	 _inf_wc(inf_wc),
	 _one_wc(one_wc),
	 _esc_wc(esc_wc)

{
	_check_wildcard();
//	std::cout	<< "WildcardString from sequence constructor."
//				<< std::endl;
}

fnx::WildcardString:: WildcardString	(size_t n,
										 char c,
										 char const inf_wc,
										 char const one_wc,
										 char const esc_wc)
	:std::string(n, c),
	 _inf_wc(inf_wc),
	 _one_wc(one_wc),
	 _esc_wc(esc_wc)

{
	_check_wildcard();
//	std::cout	<< "WildcardString fill constructor."
//				<< std::endl;
}

fnx::WildcardString::~WildcardString	(void)
{
//	std::cout	<< "WildcardString destructor."
//				<< std::endl;
}

