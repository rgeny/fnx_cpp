/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:28:46 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/22 11:37:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STD_HPP
# define STD_HPP

# include <iostream>
# include <filesystem>
# include <string>
# include <vector>

# include "../templates/container.hpp"
# include "../class/WildcardString.hpp"

namespace fs = std::filesystem;
namespace fnx
{
	fs::path	operator+	(fs::path	lhs,
							 char const * rhs);
	fs::path	operator+	(fs::path	lhs,
							 fs::path	rhs);
	std::vector<fnx::WildcardString>	get_files	(fs::path	path,
											 		 fnx::vector<fnx::WildcardString> ign_list
													 	= fnx::vector<fnx::WildcardString>());
}

#endif

