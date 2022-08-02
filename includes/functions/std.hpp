/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:28:46 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/02 11:38:08 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STD_HPP
# define STD_HPP

# include <iostream>
# include <filesystem>

namespace fnx
{
	std::filesystem::path	operator+	(std::filesystem::path	lhs,
										 char const * rhs);
	std::filesystem::path	operator+	(std::filesystem::path	lhs,
										 std::filesystem::path	rhs);
}

#endif

