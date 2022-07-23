/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strllen.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:06:42 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/23 15:00:11 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_str.hpp"

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


#ifdef FNX_MAIN

int main	(__attribute((unused)) int argc,
			 __attribute((unused)) char ** argv,
			 __attribute((unused)) char ** envp)
{
	(void)argc;

	std::cout	<< "test strllen : "
				<< std::endl

				<< "fnx::strllen(argv) : "
				<< fnx::strllen(argv)
				<< std::endl

				<< "fnx::strllen(envp) : "
				<< fnx::strllen(envp)
				<< std::endl

				<< "fnx::strllen(NULL) : "
				<< fnx::strllen(NULL)
				<< std::endl;
}

#endif
