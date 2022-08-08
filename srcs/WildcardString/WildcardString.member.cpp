/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.member.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:36 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 14:15:56 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

void	fnx::WildcardString::_check_wildcard	(void) const
{
	if (_inf_wc == _one_wc ||
		_one_wc == _esc_wc ||
		_esc_wc == _inf_wc)
	{
		throw (WildcardString_same_wildcard_char());
	}
}