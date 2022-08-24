/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.test.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:58:32 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/24 14:52:33 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST
void	fnx_test::print_category	(std::string const	msg)
{
	std::cout	<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST "
				<< msg
				<< " :"
				<< RESET
				<< std::endl;
	std::cout	<< "\033[0m";
}

void	fnx_test::print_test	(std::string const msg)
{
	std::cout	<< UNDERSCORE BLACK_BACK WHITE_TEXT
				<< "Test "
				<< msg
				<< RESET
				<< std::endl;
}

void	fnx_test::print_test	(std::string const msg,
								 bool result)
{
	std::cout	<< UNDERSCORE BLACK_BACK;
	if (result)
		std::cout	<< GREEN_TEXT;
	else
		std::cout	<< RED_TEXT;
	std::cout	<< "Test "
				<< msg
				<< RESET
				<< std::endl;
}
#endif
