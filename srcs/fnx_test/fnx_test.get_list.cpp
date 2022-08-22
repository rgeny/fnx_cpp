/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.get_list.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:13:37 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/22 11:58:08 by rgeny            ###   ########.fr       */
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
		std::vector<fnx::WildcardString>	tmp = fnx::get_files(root);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_files (") + root.c_str() + ", {\"empty\", \"sample\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("empty");
		param.push_back("sample");
		tmp = fnx::get_files(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_files (") + root.c_str() + ", {\"*\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("*");
		tmp = fnx::get_files(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_files (") + root.c_str() + ", {\"\\*\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("\\*");
		tmp = fnx::get_files(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_files (") + root.c_str() + ", {\"*line\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("*line");
		tmp = fnx::get_files(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_files (") + root.c_str() + ", {\"*m*\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("*m*");
		tmp = fnx::get_files(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_files (") + root.c_str() + ", {\"*n?\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("*n?");
		tmp = fnx::get_files(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}

	print_category("get_dirs");
	{
		print_test(std::string("get_dirs (") + root.c_str() + ")");
		std::vector<fnx::WildcardString>	tmp = fnx::get_dirs(root);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_dirs (") + root.c_str() + ", {\"empty_dir\", \"same_dir\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("empty_dir");
		param.push_back("same_dir");
		tmp = fnx::get_dirs(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_dirs (") + root.c_str() + ", {\"*\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("*");
		tmp = fnx::get_dirs(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_dirs (") + root.c_str() + ", {\"\\*\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("\\*");
		tmp = fnx::get_dirs(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_dirs (") + root.c_str() + ", {\"alphabetic_dir*\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("alphabetic_dir*");
		tmp = fnx::get_dirs(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_dirs (") + root.c_str() + ", {\"?\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("?");
		tmp = fnx::get_dirs(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}
	{
		print_test(std::string("get_dirs (") + root.c_str() + ", {\"a*?\"})");
		fnx::vector<fnx::WildcardString>	param;
		std::vector<fnx::WildcardString>	tmp;

		param.push_back("a*?");
		tmp = fnx::get_dirs(root, param);
		for (std::size_t i = 0; i < tmp.size(); i++)
			std::cout	<< tmp[i]
						<< std::endl;
	}

}
#endif
