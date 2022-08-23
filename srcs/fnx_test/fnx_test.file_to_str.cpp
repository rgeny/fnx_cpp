/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.file_to_str.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:11:12 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/23 15:11:28 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

bool	compare	(std::string file_name,
				 std::string text_to_cmp)
{
	std::ifstream		ifs(file_name);

	std::stringstream	ss;
	ss	<< ifs.rdbuf();
	
	if (ss.str().size() != text_to_cmp.size())
		return (false);
	for (size_t i = 0; i < text_to_cmp.size(); i++)
		if (ss.str()[i] != text_to_cmp[i])
			return (false);

	return (true);
}

static bool _do_test	(std::string file_name)
{
	std::string	tmp;

	try
	{
		std::string	tmp = fnx::file_to_str(file_name);
		return (compare(file_name, tmp));
	}
	catch (std::exception const & err)
	{
		std::cout	<< err.what()
					<< std::endl;
	}
	return (false);
}

void	fnx_test::file_to_str	(char ** argv)
{
	std::string	path = fs::path(argv[0]).parent_path().c_str();
	path			 +="/file_test/";

	print_category("file_to_str");
	print_test	("sample file", _do_test(path + "sample"));
	print_test	("empty file", _do_test(path + "empty"));
	print_test	("long line file", _do_test(path + "long_line"));
}
