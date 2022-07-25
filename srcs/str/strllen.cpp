/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strllen.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:06:42 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/25 12:31:17 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.hpp"

namespace fnx
{
	std::size_t	strllen	(char const * const * str)
	{
		std::size_t	i;

		if (str == NULL)
			return (0);
		for (i = 0; str[i] != NULL; i++);
		return (i);
	}
}
