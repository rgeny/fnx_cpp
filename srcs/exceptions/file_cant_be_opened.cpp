/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_cant_be_opened.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:36:00 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/23 14:46:23 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exceptions.hpp"

fnx::file_cant_be_open::file_cant_be_open	(std::string file_name)
	:_file_name(file_name)
{	}

char const *	fnx::file_cant_be_open::what	(void) const throw()
{
	static	std::string	str;

	str = FILE_CANT_BE_OPEN(_file_name);
	return (str.c_str());
}
