/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:59:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/22 12:47:11 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNX_CPP_C_STR_HPP
# define FNX_CPP_C_STR_HPP

# include <iostream>
# include <vector>
# include <string>

# include "../templates/container.hpp"

namespace fnx
{
	std::size_t					strllen	( char const * const * str);
//	fnx::vector<std::string>	vsplit	( std::string str
//										, std::string set);
	std::string					vjoin	( std::vector<std::string> src
										, std::string delimiter = "");
	std::string					vjoin	( std::vector<std::string>::iterator it
										, std::vector<std::string>::iterator ite
										, std::string delimiter = "");
	void						replace_substr	(std::string & str,
												 std::string const last,
												 std::string const next);
}

#endif

