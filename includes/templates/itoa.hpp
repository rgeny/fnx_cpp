/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:49:45 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/01 17:19:52 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITOA_HPP
# define ITOA_HPP

# include <iostream>

namespace fnx
{
	template <class T>
	std::string		itoa	(T value,
							 typename std::enable_if<std::is_integral<T>::value, bool>::type = 0)
	{
		std::stringstream	ss;

		ss	<< value;
		return (ss.str());
	}
}

#endif

