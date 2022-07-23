/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:36:00 by rgeny             #+#    #+#             */
/*   Updated: 2022/07/23 17:24:24 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNX_CPP_EXCEPTIONS_HPP
# define FNX_CPP_EXCEPTIONS_HPP

# include <exception>

# define ERROR_NUMBER_OF_ARGUMENTS "Error: wrong number of arguments."
# define WRONG_PARAMETERS "Error: wrong parameters."

namespace fnx
{
	struct wrong_number_of_arguments
		:public std::exception
	{
		virtual char const *	what() const throw();
	};

	struct wrong_parameters
		:public std::exception
	{
		virtual char const *	what() const throw();
	};

}

#endif

