/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:36:40 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/01 12:10:54 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <unistd.h>
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

//	TEST
//	std::string fnx::vjoin
	std::cout	<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST vjoin"
				<< RESET
				<< std::endl;
	{
//	TEST 1
//	std::string fnx::vjoin	(std::vector<std::string> src)
		std::cout 	<< UNDERSCORE
					<< "TEST 1"
					<< RESET
					<< std::endl
					<< "previous : ";

		std::vector<std::string>	tab;
		fnx::ptpt_to_vector(argv, tab);
		std::string					str = fnx::vjoin(tab);
		for (std::size_t i = 0, size = tab.size();
			 i < size;
			 i++)
		{
			std::cout	<< tab[i];
		}
		std::cout	<< std::endl
					<< "after    : "
					<< str
					<< std::endl;

//	TEST 2
//	std::string fnx::vjoin	( std::vector<std::string> src
//							, std::string delimiter)
		std::cout 	<< UNDERSCORE
					<< "TEST 2"
					<< RESET
					<< std::endl
					<< "previous : ";
		str = fnx::vjoin(tab, "/+-");
		for (std::size_t i = 0, size = tab.size();
			 i < size;
			 i++)
		{
			std::cout	<< tab[i];
			if (i < size - 1)
				std::cout	<< "/+-";
		}
		std::cout	<< std::endl
					<< "after    : "
					<< str
					<< std::endl;

//	TEST 3
//	std::string fnx::vjoin	( std::string::iterator it
//							, std::string::iterator ite
//							, std::string delimiter)
		std::cout 	<< UNDERSCORE
					<< "TEST 3"
					<< RESET
					<< std::endl
					<< "previous : ";
		fnx::ptpt_to_vector(envp, tab);
		size_t	len = tab.size();
		std::vector<std::string>::iterator	it = tab.begin() + 4,
											ite = tab.end() - (len - 8);
		str = fnx::vjoin(it, ite);
		while (it != ite)
		{
			std::cout	<< *it;
			it++;
		}
		std::cout	<< std::endl
					<< "after    : "
					<< str
					<< std::endl;

//	TEST 4
//	std::string fnx::vjoin	( std::string::iterator it
//							, std::string::iterator ite
//							, std::string delimiter)
		std::cout 	<< UNDERSCORE
					<< "TEST 4"
					<< RESET
					<< std::endl
					<< "previous : ";
		it = tab.begin() + 8;
		ite = tab.end() - (len - 11);
		str = fnx::vjoin(it, ite, "789");
		while (it != ite)
		{
			std::cout	<< *it;
			it++;
			if (it != ite)
				std::cout	<< "789";
		}
		std::cout	<< std::endl
					<< "after    : "
					<< str
					<< std::endl;
	}

//	TEST  5
//	template < class T >
//	std::chrono::duration<double>	chronometer	(void)
	std::cout	<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST chronometer"
				<< RESET
				<< std::endl;
	{
		std::cout	<< UNDERSCORE
					<< "usleep 1.024s"
					<< RESET
					<< std::endl;
		fnx::chronometer<double>();
		usleep(1024000);
		std::cout	<< "result: "
					<< fnx::chronometer<double>().count()
					<< std::endl;
	}
	
//	TEST
//	fnx::vector
	std::cout	<< BLUE_TEXT BLACK_BACK BRIGHT
				<< "TEST fnx::vector"
				<< RESET
				<< std::endl;
	{
		fnx::vector<int>	v;

		for (int i = 0; i < 100; i++)
		{
			v.push_back(i);
		}
		fnx::vector<int>::iterator	it = v.find_first_occ(17);
		std::cout	<< "\"fnx::vector<int>	v\" fill with 0-99 values"
					<< std::endl
					<< "v.find_first_occ(17) : "
					<< *it
					<< std::endl;
		it = v.find_first_occ(100);
		std::cout	<< "v.find_first_occ(100) : "
					<< *it
					<< std::endl;
	}

	return (EXIT_SUCCESS);
}
#endif
