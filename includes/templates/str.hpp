/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:44:43 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/22 12:48:54 by rgeny            ###   ########.fr       */
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

		while ( ! str.empty() )
		{
			i = str.find_first_of(set, 0);
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

