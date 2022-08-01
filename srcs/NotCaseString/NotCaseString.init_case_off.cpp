/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_case_off.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:45:07 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/01 17:01:48 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotCaseString.hpp"

NotCaseString::CASE_OFF_TYPE	NotCaseString::_init_case_off	(void)
{
	NotCaseString::CASE_OFF_TYPE	tmp;
	int	diff_low_up = 'a' - 'A';

	NotCaseString::_case_off.resize(256);
	for (int i = 0; i < 256; i++)
	{
		if (i >= 'a' && i <= '~')
			tmp[i] = (i - diff_low_up);
		else
			tmp[i] = i;
	}
	return (tmp);
}
