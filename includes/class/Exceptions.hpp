/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:36:00 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 14:12:32 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNX_CPP_EXCEPTIONS_HPP
# define FNX_CPP_EXCEPTIONS_HPP

# include <exception>

# define ERROR_NUMBER_OF_ARGUMENTS "Error: wrong number of arguments."
# define WRONG_PARAMETERS "Error: wrong parameters."
# define ERROR_WILDCARDSTRING_SAME_WILDCARD_CHAR "fnx::WildcardString error: You can't define several types of wildcard with the same character"

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

	struct WildcardString_same_wildcard_char
		:public std::exception
	{
		virtual char const *	what() const throw();
	};

}

#endif

