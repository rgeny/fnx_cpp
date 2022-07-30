/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:15:38 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/30 14:18:44 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.hpp"

int	print_error	(std::exception const & err)
{
	std::cout	<< RED_TEXT BLACK_BACK
				<< err.what()
				<< RESET
				<< std::endl;
	return (EXIT_FAILURE);
}

int	print_filesystem_error	(std::filesystem::filesystem_error const & err)
{
	std::cout	<< RED_TEXT BLACK_BACK
				<< err.what()
				<< std::endl
				<< "error to :"
				<< std::endl
				<< "path1: \""
				<< err.path1()
				<< "\""
				<< std::endl
				<< "path2: \""
				<< err.path2()
				<< "\""
				<< RESET
				<< std::endl;
	return (EXIT_FAILURE);
}
