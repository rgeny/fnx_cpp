/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.member.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:06:36 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/01 17:02:17 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotCaseString.hpp"

unsigned char	fnx::NotCaseString::_cast	(char c) const
{
	return (fnx::NotCaseString::_case_off[static_cast<unsigned char>(c)]);
}
