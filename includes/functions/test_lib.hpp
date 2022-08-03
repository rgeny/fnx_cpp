/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:58:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/03 11:55:44 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIB_HPP
# define TEST_LIB_HPP

# include <iostream>

namespace fnx_test
{
	void	print_category	(std::string const msg);
	void	print_test		(std::string const msg);
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
	void	replace_substr	(char ** argv,
							 char ** envp);
}

#endif

