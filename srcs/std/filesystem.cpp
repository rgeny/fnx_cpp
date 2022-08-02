/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesystem.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:27:52 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/02 11:31:55 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std.hpp"

std::filesystem::path	fnx::operator+	(std::filesystem::path lhs,
									 char const * rhs)
{
	lhs += rhs;
	return (lhs);
}
