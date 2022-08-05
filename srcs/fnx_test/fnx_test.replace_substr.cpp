/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.replace_substr.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:54:19 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:57:47 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST

static void	_do_test	(std::string test,
						 std::string str,
						 std::string last,
						 std::string next)
{
	fnx_test::print_test(test);
	std::cout	<< "str     = \""
				<< str
				<< "\""
				<< std::endl
				<< "replace \""
				<< last
				<< "\""
				<< std::endl
				<< "by \""
				<< next
				<< "\""
				<< std::endl;
	fnx::replace_substr(str, last, next);
	std::cout	<< "new str = \""
				<< str
				<< "\""
				<< std::endl;
}

void	fnx_test::replace_substr	(UNUSED char ** argv,
									 UNUSED char ** envp)
{
	print_category("replace_substr");
	_do_test("nothing to be replaced",
			 "nothing to be replaced",
			 "",
			 "");
	_do_test("replaced by nothing",
			 "a.b..c.d.e.f.g.h",
			 ".",
			 "");
	_do_test("replaced by the same str",
			 "01 23 23 23 23 23 45 45 45 45 45 45 45 45 45",
			 "23 ",
			 "23 ");
	_do_test("replaced by longer str",
			 "aaa",
			 "a",
			 "0123456789X");
	_do_test("nothing replaced by something",
			 "abc",
			 "",
			 "def");
	_do_test("empty str",
			 "",
			 "",
			 "abc");

}
#endif
