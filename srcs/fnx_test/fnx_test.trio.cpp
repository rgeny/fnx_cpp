/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.trio.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:01:01 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:57:14 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST
void	fnx_test::trio	(void)
{
	print_category	("trio");
	{
		print_test("dfl constructor");

		fnx::trio<int, char, float>	t;
		t.print_data();
	}
	{
		print_test("parameters constructor");

		fnx::trio<int, char, float>	t(4, 'w', 17.1798);
		t.print_data();

		print_test("cpy constructor");

		fnx::trio<int, char, float>	t2(t);
		t2.print_data();
	}
	
}
#endif
