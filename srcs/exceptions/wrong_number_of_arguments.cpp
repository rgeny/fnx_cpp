/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_number_of_arguments.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:37:11 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/23 16:46:37 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exceptions.hpp"

char const *	fnx::wrong_number_of_arguments::what() const throw()
{
	return (ERROR_NUMBER_OF_ARGUMENTS);
}
