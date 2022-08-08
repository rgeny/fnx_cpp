/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:58:15 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 13:14:37 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNX_TEST_HPP
# define FNX_TEST_HPP

# include <iostream>

# include "fnx.hpp"

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
	void	WildcardString	(void);
	void	replace_substr	(char ** argv,
							 char ** envp);
	void	get_list		(char ** argv);
}

#endif

