/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:09:57 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:55:58 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

std::vector<std::string>	fnx::get_files	(fs::path path,
											 fnx::vector<std::string>	ign_list)
{
	std::vector<std::string>			to_return;
	std::filesystem::directory_entry	dir(path);

	fs::recursive_directory_iterator	it(dir);
	while (it != fs::end(it))
	{
		std::cout	<< it->path()
					<< std::endl;
		if (it->is_regular_file() &&
			ign_list.find_first_occ(it->path().c_str()) == ign_list.end())
			to_return.push_back(it->path().c_str());
		it++;
	}
	return (to_return);
}
