/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:36:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/12 11:47:26 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <unistd.h>

#include "fnx_test.hpp"

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
	fnx_test::replace_substr(argv, envp);
	fnx_test::get_list(argv);
	fnx_test::WildcardString();

	return (0);
}
#endif
