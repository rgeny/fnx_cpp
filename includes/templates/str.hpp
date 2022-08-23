/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:44:43 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/22 13:05:49 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_HPP
# define STR_HPP

namespace fnx
{
	template <class T>
	fnx::vector<T>	vsplit	(T str,
							 T set)
	{
		fnx::vector<T>	to_return;
		size_t			i;

		std::cout	<< std::endl
					<< "set = "
					<< set
					<< std::endl
					<< "str = "
					<< str
					<< std::endl;

		while ( ! str.empty() )
		{
			i = str.find_first_of(set, 0);
			std::cout	<< "i = "
						<< i
						<< std::endl;
			if (i > 0)
				to_return.push_back(str.substr(0, i));
			if (i == T::npos)
				str.clear();
			else
				str.erase(0, i + 1);
		}
		return (to_return);
	}
}

#endif

