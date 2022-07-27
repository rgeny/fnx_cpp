/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:06:38 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/27 15:21:20 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIME_HPP
# define TIME_HPP

# include <iostream>
# include <chrono>
# include <ratio>
# include <ctime>

namespace fnx
{
	template < class T >
	std::chrono::duration<double>	chronometer	(void)
	{
		using namespace std::chrono;
		static steady_clock::time_point	prev_t;
		static bool						prev_set = false;
		steady_clock::time_point		actual_t;
		duration<double>				to_return;

		if (!prev_set)
		{
			prev_t = steady_clock::now();
			prev_set = true;
			return (to_return);
		}
		actual_t = steady_clock::now();
		to_return = duration_cast<duration<double> >(actual_t - prev_t);
		prev_set = false;
		return (to_return);
	}
}

#endif

