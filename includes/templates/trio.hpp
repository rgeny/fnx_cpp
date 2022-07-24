/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:43:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/24 15:51:43 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIO_HPP
# define TRIO_HPP

# include <iostream>

namespace fnx
{
	template
	<
		class T1,
		class T2,
		class T3
	>
	class trio
	{
		public:
			T1	a;
			T2	b;
			T3	c;

			trio	(T1 t1 = T1(),
					 T2 t2 = T2(),
					 T3 t3 = T3())
				:a(t1)
				,b(t2)
				,c(t3)
			{
				std::cout	<< "trio dfl constructor."
							<< std::endl;
			}

			trio	(trio const & src)
				:a(src.a)
				,b(src.b)
				,c(src.c)
			{
				std::cout	<< "trio cpy constructor."
							<< std::endl;
			}
			~trio	(void)
			{	}

			trio &	operator=	(trio const & src)
			{
				this->a = src.a;
				this->b = src.b;
				this->c = src.c;

				return (*this);
			}

			void	print_data	(void) const
			{
				std::cout	<< "a = "
							<< this->a
							<< std::endl
							<< "b = "
							<< this->b
							<< std::endl
							<< "c = "
							<< this->c
							<< std::endl;
			}

		private:
	};
}

#endif

