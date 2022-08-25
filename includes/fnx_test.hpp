/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:58:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/25 14:01:28 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNX_TEST_HPP
# define FNX_TEST_HPP

# include <iostream>

# include "fnx.hpp"

# define PRINT_TEST(boolean)	try \
								{ \
									std::cout	<< BLACK_BACK; \
									if (boolean == true) \
										std::cout	<< GREEN_TEXT; \
									else \
										std::cout	<< RED_TEXT; \
									std::cout	<< "SUCCESSFUL TEST ( " \
												<< __FILE__ \
												<< " || l." \
												<< __LINE__ \
												<< " ) ==> " BRIGHT UNDERSCORE \
												<< #boolean \
												<< RESET \
												<< std::endl; \
								} \
								catch (std::exception const & err) \
								{ \
									std::cout	<< RED_TEXT \
												<< "( " \
												<< __FILE__ \
												<< " || l." \
												<< __LINE__ \
												<< " ) ==> " BRIGHT UNDERSCORE \
												<< #boolean \
												<< RESET RED_TEXT \
												<< std::endl \
												<< BLACK_BACK "throwing an exception :" \
												<< RESET \
												<< std::endl \
												<< RED_TEXT BLACK_BACK \
												<< err.what() \
												<< RESET \
												<< std::endl; \
								}
# define PRINT_FAILING_TEST(boolean)	try \
										{ \
											std::cout	<< BLACK_BACK; \
											if (boolean == true) \
												std::cout	<< RED_TEXT; \
											else \
												std::cout	<< GREEN_TEXT; \
											std::cout	<< "FAILING TEST ( " \
														<< __FILE__ \
														<< " || l." \
														<< __LINE__ \
														<< " ) ==> " BRIGHT UNDERSCORE \
														<< #boolean \
														<< RESET \
														<< std::endl; \
										} \
										catch (std::exception const & err) \
										{ \
											std::cout	<< GREEN_TEXT \
														<< "FAILING TEST ( " \
														<< __FILE__ \
														<< " || l." \
														<< __LINE__ \
														<< " ) ==> " BRIGHT UNDERSCORE \
														<< #boolean \
														<< RESET \
														<< std::endl; \
										}

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

