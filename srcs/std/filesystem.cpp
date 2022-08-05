/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesystem.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:27:52 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:55:50 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

std::filesystem::path	fnx::operator+	(std::filesystem::path lhs,
										 char const * rhs)
{
	lhs += rhs;
	return (lhs);
}

std::filesystem::path	fnx::operator+	(std::filesystem::path lhs,
										 std::filesystem::path rhs)
{
	lhs += rhs;
	return (lhs);
}
