/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.vsplit.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:05:20 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:21:02 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

#ifdef FNX_TEST
void	fnx_test::vsplit	(void)
{
	print_category("vsplit");
	{
		std::string		str ("abc\tdef\tghi\tjkl\tmno\tpqr\tstu\tvwx\tyz."),
						set ("\tej");
		std::vector<std::string>	tmp = fnx::vsplit(str, set);

		for (std::size_t i = 0; i < tmp.size(); i++)
		{
			std::cout	<< "["
						<< i
						<< "] = "
						<< tmp[i]
						<< std::endl;
		}
	}	
}
#endif
