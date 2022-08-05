/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.NotCaseString.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:13:04 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:57:38 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST
void	fnx_test::NotCaseString	(void)
{
	print_category("NotCaseString");
	{
		fnx::NotCaseString	a = "aBcDe",
							b = "AbCdE";

		std::cout	<< "str a : "
					<< a
					<< std::endl
					<< "str b : "
					<< b
					<< std::endl
					<< "a == b ? "
					<< (int)(a == b)
					<< std::endl;
		a += "f";

		std::cout	<< "str a : "
					<< a
					<< std::endl
					<< "str b : "
					<< b
					<< std::endl
					<< "a == b ? "
					<< (int)(a == b)
					<< std::endl;
	}
}
#endif
