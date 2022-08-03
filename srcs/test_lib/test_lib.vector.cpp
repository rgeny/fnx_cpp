/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.vector.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:11:22 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:21:25 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

#ifdef FNX_TEST
void	fnx_test::vector	(void)
{
	print_category("fnx::vector");
	{
		fnx::vector<int>	v;

		for (int i = 0; i < 100; i++)
		{
			v.push_back(i);
		}
		fnx::vector<int>::iterator	it = v.find_first_occ(17);
		std::cout	<< "\"fnx::vector<int>	v\" fill with 0-99 values"
					<< std::endl
					<< "v.find_first_occ(17) : "
					<< *it
					<< std::endl;
		it = v.find_first_occ(100);
		std::cout	<< "v.find_first_occ(100) : "
					<< *it
					<< std::endl;
	}
}
#endif
