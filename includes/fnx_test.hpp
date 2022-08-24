/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:58:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/24 11:17:56 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNX_TEST_HPP
# define FNX_TEST_HPP

# include <iostream>

# include "fnx.hpp"

# define PRINT_TEST(boolean)	std::cout	<< BLACK_BACK; \
								if (boolean == true) \
									std::cout	<< GREEN_TEXT; \
								else \
									std::cout	<< RED_TEXT; \
								std::cout	<< "( " \
											<< __FILE__ \
											<< " || l." \
											<< __LINE__ \
											<< " ) ==> " BRIGHT UNDERSCORE \
											<< #boolean \
											<< RESET \
											<< std::endl;

namespace fnx_test
{
	void	print_category	(std::string const msg);
	void	print_test		(std::string const msg);
	void	print_test		(std::string const msg,
							 bool result);
	void	trio			(void);
	void	ptpt_to_vector	(char ** argv);
	void	strllen			(char ** argv,
							 char ** envp);
	void	vsplit			(void);
	void	vjoin			(char ** argv,
							 char ** envp);
	void	chronometer		(void);
	void	vector			(void);
	void	itoa			(void);
	void	NotCaseString	(void);
	void	WildcardString	(char ** argv);
	void	replace_substr	(char ** argv,
							 char ** envp);
	void	get_list		(char ** argv);
	void	file_to_str		(char ** argv);
}

#endif

