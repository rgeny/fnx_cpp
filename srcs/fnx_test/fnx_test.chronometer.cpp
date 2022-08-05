/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.chronometer.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:10:07 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:56:39 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST
#include <unistd.h>

void	fnx_test::chronometer	(void)
{
	print_category("chronometer");
	{
		print_test("usleep 0,137s");
		fnx::chronometer<double>();
		usleep(137000);
		std::cout	<< "result: "
					<< fnx::chronometer<double>().count()
					<< std::endl;
	}
}
#endif
