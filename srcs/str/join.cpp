/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:30:14 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:56:06 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

std::string	fnx::vjoin	( std::vector<std::string> src
						, std::string delimiter)
{
	std::string	to_return;

	for (std::size_t i = 0, size=src.size();
		 i < size;
		 i++)
	{
		to_return += src[i];
		if (i != size - 1)
			to_return += delimiter;
	}
	return (to_return);
}

std::string	fnx::vjoin	( std::vector<std::string>::iterator it
						, std::vector<std::string>::iterator ite
						, std::string delimiter)
{
	std::string	to_return;

	while (it != ite)
	{
		to_return += *it;
		it++;
		if (it != ite)
			to_return += delimiter;
	}
	return (to_return);
}
