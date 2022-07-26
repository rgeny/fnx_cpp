/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:59:18 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/26 17:33:32 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNX_CPP_C_STR_HPP
# define FNX_CPP_C_STR_HPP

# include <iostream>
# include <vector>
# include <string>

namespace fnx
{
	std::size_t					strllen	( char const * const * str);
	std::vector<std::string>	vsplit	( std::string str
										, std::string set);
	std::string					vjoin	( std::vector<std::string> src);
	std::string					vjoin	( std::vector<std::string> src
										, std::string delimiter);
}

#endif

