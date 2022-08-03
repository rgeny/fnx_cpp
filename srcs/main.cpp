/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:36:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:30:29 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <unistd.h>
#include "fnx.hpp"

#ifdef FNX_TEST

int	main	( __attribute((unused)) int argc
			, __attribute((unused)) char ** argv
			, __attribute((unused)) char ** envp)
{
	fnx_test::trio();
	fnx_test::ptpt_to_vector(argv);
	fnx_test::strllen(argv, envp);
	fnx_test::vsplit();
	fnx_test::vjoin(argv, envp);
	fnx_test::chronometer();
	fnx_test::vector();
	fnx_test::itoa();
	fnx_test::NotCaseString();
}
#endif
