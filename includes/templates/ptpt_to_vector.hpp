/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptpt_to_vector.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:29:26 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:51:36 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PTPT_TO_VECTOR_HPP
# define PTPT_TO_VECTOR_HPP

namespace fnx
{
	template < class T_SRC, class T_TARGET >
	void	ptpt_to_vector	(T_SRC ** src,
							 std::vector< T_TARGET > & target)
	{
		target.clear();

		if (src == NULL)
		{
# ifdef FNX_ERROR
			std::cerr	<< RED_TEXT BRIGHT
						<< "ptpt_to_vector receive NULL ptpt."
						<< RESET
						<< std::endl;
# endif
			return ;
		}
		for (std::size_t i = 0; src[i] != NULL; i++)
		{
			target.push_back(src[i]);
		}
	}
}
#endif
