/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.itoa.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:12:14 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:20:50 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

#ifdef FNX_TEST
void	fnx_test::itoa	(void)
{
	print_category("fnx::itoa");
	{
		int	x = 7;
		std::string	test = fnx::itoa(x);

		std::cout	<< "x=7 : "
					<< test
					<< std::endl;

	}	
}
#endif
