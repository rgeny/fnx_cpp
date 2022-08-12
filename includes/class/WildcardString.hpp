/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:33:37 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/12 12:42:38 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WILDCARDSTRING_HPP
# define WILDCARDSTRING_HPP

# define INFINITY_WILDCARD '*'
# define ONE_CHAR_WILDCARD '?'
# define ESCAPE_WILDCARD '\\'

# include <iostream>

namespace fnx
{

	class WildcardString
		:public std::string
	{
		public:

			WildcardString		(void);
			WildcardString		(WildcardString const & str);
			WildcardString		(WildcardString const & str,
								 size_t pos,
								 size_t len = std::string::npos);
			WildcardString		(const std::string & str);
			WildcardString		(char const * s);
			WildcardString		(char const * s,
								 size_t n);
			WildcardString		(size_t n,
								 char c);
			template <class InputIterator>
			WildcardString		(InputIterator first,
								 InputIterator last)
				:std::string(first, last)
			{
//				std::cout	<< "WildcardString range constructor."
//							<< std::endl;
			}
			~WildcardString		(void);

			WildcardString &	operator=	(WildcardString const & src);

			int		compare	(WildcardString const & str) const;
			int		compare	(size_t pos,
							 size_t len,
							 WildcardString const & str) const;
			int		compare (size_t pos,
							 size_t len,
							 WildcardString const & str,
							 size_t subpos,
							 size_t sublen) const;
			int		compare (char const * s) const;
			int		compare	(size_t pos,
							 size_t len,
							 char const * s) const;
			int		compare (size_t pos,
							 size_t len,
							 char const * s,
							 size_t n) const;

			size_t	find	(WildcardString const & str,
							 size_t pos = 0) const;
			size_t	find	(char const * s,
							 size_t pos = 0) const;
			size_t	find	(char const * s,
							 size_t pos,
							 size_t n) const;
			size_t	find	(char c,
							 size_t pos = 0) const;

			size_t	rfind	(WildcardString const & str,
							 size_t pos = npos) const;
			size_t	rfind	(char const * s,
							 size_t pos = npos) const;
			size_t	rfind	(char const * s,
							 size_t pos,
							 size_t n) const;
			size_t	rfind	(char c,
							 size_t pos = npos) const;

			size_t	find_first_of	(WildcardString const & str,
									 size_t pos = 0) const;
			size_t	find_first_of	(char const * s,
									 size_t pos = 0) const;
			size_t	find_first_of	(char const * s,
									 size_t pos,
									 size_t n) const;
			size_t	find_first_of	(char c,
									 size_t pos = 0) const;

		private:
	};
	bool 	operator==	(WildcardString const & lhs,
						 WildcardString const & rhs);
	bool 	operator==	(char const * lhs,
						 WildcardString const & rhs);
	bool 	operator==	(WildcardString const & lhs,
						 char const * rhs);

	bool 	operator!=	(WildcardString const & lhs,
						 WildcardString const & rhs);
	bool 	operator!=	(char const * lhs,
						 WildcardString const & rhs);
	bool 	operator!=	(WildcardString const & lhs,
						 char const * rhs);

	bool 	operator<	(WildcardString const & lhs,
						 WildcardString const & rhs);
	bool 	operator<	(char const * lhs,
						 WildcardString const & rhs);
	bool 	operator<	(WildcardString const & lhs,
						 char const * rhs);

	bool 	operator<=	(WildcardString const & lhs,
						 WildcardString const & rhs);
	bool 	operator<=	(char const * lhs,
						 WildcardString const & rhs);
	bool 	operator<=	(WildcardString const & lhs,
						 char const * rhs);

	bool 	operator>	(WildcardString const & lhs,
						 WildcardString const & rhs);
	bool 	operator>	(char const * lhs,
						 WildcardString const & rhs);
	bool 	operator>	(WildcardString const & lhs,
						 char const * rhs);

	bool 	operator>=	(WildcardString const & lhs,
						 WildcardString const & rhs);
	bool 	operator>=	(char const * lhs,
						 WildcardString const & rhs);
	bool 	operator>=	(WildcardString const & lhs,
						 char const * rhs);
}
#endif

//public:

//

//

//

//
//
//	size_t	find_last_of	(WildcardString const & str
//							 size_t pos = npos) const;
//	size_t	find_last_of	(char const * s,
//							 size_t pos = npos) const;
//	size_t	find_last_of	(char const * s,
//							 size_t pos,
//							 size_t n) const;
//	size_t	find_last_of	(char c,
//							 size_t pos = npos) const;
//
//	size_t	find_first_not_of	(WildcardString const & str
//								 size_t pos = 0) const;
//	size_t	find_first_not_of	(char const * s,
//								 size_t pos = 0) const;
//	size_t	find_first_not_of	(char const * s,
//								 size_t pos,
//								 size_t n) const;
//	size_t	find_first_not_of	(char c,
//								 size_t pos = 0) const;
//
//	size_t	find_last_not_of	(WildcardString const & str
//								 size_t pos = npos) const;
//	size_t	find_last_not_of	(char const * s,
//								 size_t pos = npos) const;
//	size_t	find_last_not_of	(char const * s,
//								 size_t pos,
//								 size_t n) const;
//	size_t	find_last_not_of	(char c,
//								 size_t pos = npos) const;
//
//private:
//	std::string				_out_of_range	(size_t pos,
//											 size_t this_size) const;
//};

