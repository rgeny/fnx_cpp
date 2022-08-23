/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_str.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:10:24 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/23 15:02:46 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

std::string	fnx::file_to_str	(std::string file_name)
{
	std::ifstream		ifs(file_name);

	if ( ! ifs.good() )
		throw (file_cant_be_open(file_name));

	std::stringstream	ss;
	ss	<< ifs.rdbuf();
	
	return (ss.str());
}
