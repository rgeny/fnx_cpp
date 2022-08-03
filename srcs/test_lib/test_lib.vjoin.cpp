/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.vjoin.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:06:19 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:49:30 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx.hpp"

#ifdef FNX_TEST

using namespace fnx_test;
static void		_constructor_1	(char ** argv)
{
	print_test("constructor 1");
	std::cout	<< "previous : ";

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
}

static void		_constructor_2	(char ** argv)
{
	print_test	("constructor 2");
	std::cout	<< "previous : ";
	std::vector<std::string>	tab;
	fnx::ptpt_to_vector(argv, tab);
	std::string	str = fnx::vjoin(tab, "/+-");
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
}

static void		_constructor_3	(char ** envp)
{
	print_test("constructor 3");
	std::cout	<< "previous : ";
	std::vector<std::string>	tab;
	fnx::ptpt_to_vector(envp, tab);
	size_t	len = tab.size();
	std::cout	<< "len = "
				<< len
				<< std::endl;
	std::vector<std::string>::iterator	it = tab.begin() + 4,
										ite = tab.end() - (len - 8);
	std::string	str = fnx::vjoin(it, ite);
	while (it != ite)
	{
		std::cout	<< *it;
		it++;
	}
	std::cout	<< std::endl
				<< "after    : "
				<< str
				<< std::endl;
}

void	_constructor_4	(char ** envp)
{
	print_test("constructor 4");
	std::cout	<< "previous : ";
	std::vector<std::string>	tab;
	fnx::ptpt_to_vector(envp, tab);
	size_t	len = tab.size();
	std::cout	<< "len - 11 = "
				<< len 
				<< std::endl;
	std::vector<std::string>::iterator	it = tab.begin() + 8,
										ite = tab.end() - (len - 11);
	std::string	str = fnx::vjoin(it, ite, "789");
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

void	fnx_test::vjoin	(char ** argv,
						 char ** envp)
{
	print_category("vjoin");
	_constructor_1(argv);
	_constructor_2(argv);
	_constructor_3(envp);
	_constructor_4(envp);
}
#endif
