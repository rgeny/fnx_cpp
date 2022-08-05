/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.get_list.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:13:37 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:57:29 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST

void	fnx_test::get_list	(UNUSED char ** argv)
{
	print_category("get_files(fs::path path)");
	std::vector<std::string>	tmp = fnx::get_files(".");

	std::cout	<< std::endl
				<< std::endl;
	for (std::size_t i = 0; i < tmp.size(); i++)
		std::cout	<< tmp[i]
					<< std::endl;
}
#endif
