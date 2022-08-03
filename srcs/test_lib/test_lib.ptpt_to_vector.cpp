/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.ptpt_to_vector.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:02:13 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:22:31 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

#ifdef FNX_TEST
void	fnx_test::ptpt_to_vector	(char ** argv)
{
	print_category("ptpt_to_vector");
	{
		std::vector<std::string>	tmp;
		fnx::ptpt_to_vector(argv, tmp);

		for (std::size_t i = 0; i < tmp.size(); i++)
		{
			std::cout	<< "argv["
						<< i
						<< "] = "
						<< tmp[i]
						<< std::endl;
		}
	}
}
#endif
