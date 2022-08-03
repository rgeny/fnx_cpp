/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.chronometer.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:10:07 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:23:18 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

#ifdef FNX_TEST
#include <unistd.h>

void	fnx_test::chronometer	(void)
{
	print_category("chronometer");
	{
		print_test("usleep 1.024s");
		fnx::chronometer<double>();
		usleep(1024000);
		std::cout	<< "result: "
					<< fnx::chronometer<double>().count()
					<< std::endl;
	}
}
#endif
