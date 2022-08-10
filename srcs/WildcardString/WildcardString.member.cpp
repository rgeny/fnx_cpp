/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.member.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:36 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/10 17:30:20 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

void	fnx::WildcardString::print_data	(void) const
{
	std::cout	<< "\""
				<< *this
				<< "\""
				<< std::endl
				<< "infinity wildcard = '"
				<< _inf_wc
				<< "'"
				<< std::endl
				<< "one char wildcard = '"
				<< _one_wc
				<< "'"
				<< std::endl
				<< "escape wildcard   = '"
				<< _esc_wc
				<< "'"
				<< std::endl;
}

void	fnx::WildcardString::_check_wildcard	(void) const
{
	if (_inf_wc == _one_wc ||
		_one_wc == _esc_wc ||
		_esc_wc == _inf_wc)
	{
		throw (WildcardString_same_wildcard_char());
	}
}
