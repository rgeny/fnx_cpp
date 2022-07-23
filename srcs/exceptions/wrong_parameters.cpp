/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_parameters.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:56:46 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/23 17:05:28 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exceptions.hpp"

char const *	fnx::wrong_parameters::what	() const throw()
{
	return (WRONG_PARAMETERS);
}
