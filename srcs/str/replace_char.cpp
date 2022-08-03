/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_char.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:19:50 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 10:26:36 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.hpp"

void	fnx::replace_substr	(std::string & str,
							 std::string const last,
							 std::string const next)
{
	for (size_t i = str.find(last); i < str.size(); i++)
	{
		str.replace(i, last.size(), next);
	}
}
