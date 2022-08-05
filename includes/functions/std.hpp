/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:28:46 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 11:00:50 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STD_HPP
# define STD_HPP

# include <iostream>
# include <filesystem>
# include <string>
# include <vector>

# include "../templates/container.hpp"

namespace fs = std::filesystem;
namespace fnx
{
	fs::path	operator+	(fs::path	lhs,
							 char const * rhs);
	fs::path	operator+	(fs::path	lhs,
							 fs::path	rhs);
	std::vector<std::string>	get_files	(fs::path	path,
											 fnx::vector<std::string> ign_list = fnx::vector<std::string>());
}

#endif

