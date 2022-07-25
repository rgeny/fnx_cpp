/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:33:30 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/25 12:49:31 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.hpp"

std::vector<std::string>	fnx::vsplit	( std::string str
										, std::string set)
{
	std::vector<std::string>	to_return;
	size_t						i;

	while (!str.empty())
	{
		i = str.find_first_of(set, 0);
		if (i > 0)
			to_return.push_back(str.substr(0, i));
		if (i == std::string::npos)
			str.clear();
		else
			str.erase(0, i + 1);
	}

	return (to_return);
}
