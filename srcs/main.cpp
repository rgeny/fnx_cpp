/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:36:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/25 12:48:49 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "fnx.hpp"

#ifdef FNX_MAIN
int	main	( __attribute((unused)) int argc
			, __attribute((unused)) char ** argv
			, __attribute((unused)) char ** envp)
{
//	TEST
//	template
//	<
//		class T1,
//		class T2,
//		class T3
//	>
//	class trio
	std::cout	<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST trio"
				<< RESET
				<< std::endl;
	{
		std::cout	<< UNDERSCORE
					<< "Test dfl constructor :"
					<< RESET
					<< std::endl;

		fnx::trio<int, char, float>	t;
		t.print_data();
	}
	{
		std::cout	<< UNDERSCORE
					<< "Test parameters constructor :"
					<< RESET
					<< std::endl;

		fnx::trio<int, char, float>	t(4, 'w', 17.1798);
		t.print_data();

		std::cout	<< UNDERSCORE
					<< "Test cpy constructor :"
					<< RESET
					<< std::endl;

		fnx::trio<int, char, float>	t2(t);
		t2.print_data();
	}


//	TEST
//	template < class T_SRC, class T_TARGET >
//	void ptpt_to_vector	(T_SRC ** src,
//						 std::vector< T_TARGET > & target)
	std::cout	<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST ptpt_to_vector"
				<< RESET
				<< std::endl;
	{
		std::vector<std::string>	tmp;
		fnx::ptpt_to_vector(argv, tmp);

		for (std::size_t i = 0; i < tmp.size(); i++)
		{
			std::cout	<< "argv["
						<< i
						<< "] = "
						<< tmp[i]
						<< std::endl;
		}
	}

//	TEST
//	std::size_t strllen (char const * const * s)
	std::cout	<< std::endl
				<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST strllen"
				<< RESET
				<< std::endl

				<< "fnx::strllen(argv) : "
				<< fnx::strllen(argv)
				<< std::endl

				<< "fnx::strllen(envp) : "
				<< fnx::strllen(envp)
				<< std::endl

				<< "fnx::strllen(NULL) : "
				<< fnx::strllen(NULL)
				<< std::endl;
				
//	TEST
//	std::vector<std::string>	vslit	( std::string str
//										, std::string set)
	std::cout	<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST vsplit"
				<< RESET
				<< std::endl;
	{
		std::string		str ("abc\tdef\tghi\tjkl\tmno\tpqr\tstu\tvwx\tyz."),
						set ("\tej");
		std::vector<std::string>	tmp = fnx::vsplit(str, set);

		for (std::size_t i = 0; i < tmp.size(); i++)
		{
			std::cout	<< "["
						<< i
						<< "] = "
						<< tmp[i]
						<< std::endl;
		}
	}




	return (EXIT_SUCCESS);
}
#endif
