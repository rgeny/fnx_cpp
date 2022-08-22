/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   container.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:58:53 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/22 12:30:24 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAINER_HPP
# define CONTAINER_HPP

# include <iostream>
# include <vector>

namespace fnx
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
		:public std::vector<T, Alloc>
	{
		public:
			typename std::vector<T, Alloc>::iterator	find_first_occ	(T	value)
			{
				typename std::vector<T, Alloc>::iterator	it = this->begin(),
															ite = this->end();
				while (it != ite)
				{
					if (*it == value)
						return (it);
					it++;
				}
				return (ite);
			}
	};
}


#endif

