/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.get_list.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:13:37 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 12:00:01 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST

void	fnx_test::get_list	(UNUSED char ** argv)
{
	print_category("get_files");
	fs::path	root = fs::path(argv[0]).parent_path();
	root += "/file_test";

	{
		print_test(std::string("get_files (") + root.c_str() + ")");
		std::vector<std::string>	tmp = fnx::get_files(root);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_files (") + root.c_str() + ", {\"empty\", \"sample\"}");
		fnx::vector<std::string>	param;
		std::vector<std::string>	tmp;

		param.push_back("empty");
		param.push_back("sample");
		tmp = fnx::get_files(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
}
#endif
