/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:33:37 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/10 19:27:07 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WILDCARDSTRING_HPP
# define WILDCARDSTRING_HPP

# define INFINITY_WILDCARD_CHAR '*'
# define ONE_CHAR_WILDCARD_CHAR '?'
# define ESCAPE_WILDCARD_CHAR '\\'

# include <iostream>

namespace fnx
{
	class WildcardString
		:public std::string
	{
		public:

			WildcardString		(char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			WildcardString		(WildcardString const & str);
			WildcardString		(WildcardString const & str,
								 size_t pos,
								 size_t len = std::string::npos);
			WildcardString		(const std::string & str,
								 char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			WildcardString		(char const * s,
								 char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			WildcardString		(char const * s,
								 size_t n,
								 char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			WildcardString		(size_t n,
								 char c,
								 char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			template <class InputIterator>
			WildcardString		(InputIterator first,
								 InputIterator last,
								 char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR)
				:std::string(first, last),
				 _inf_wc(inf_wc),
				 _one_wc(one_wc),
				 _esc_wc(esc_wc)
			{
				_check_wildcard();
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
			int		compare (char const * s,
							 char const inf_wc = INFINITY_WILDCARD_CHAR,
							 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
							 char const esc_wc = ESCAPE_WILDCARD_CHAR) const;
			int		compare	(size_t pos,
							 size_t len,
							 char const * s,
							 char const inf_wc = INFINITY_WILDCARD_CHAR,
							 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
							 char const esc_wc = ESCAPE_WILDCARD_CHAR) const;
			int		compare (size_t pos,
							 size_t len,
							 char const * s,
							 size_t n,
							 char const inf_wc = INFINITY_WILDCARD_CHAR,
							 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
							 char const esc_wc = ESCAPE_WILDCARD_CHAR) const;

			size_t	find	(WildcardString const & str,
							 size_t pos = 0) const;
			size_t	find	(char const * s,
							 size_t pos = 0) const;
			size_t	find	(char const * s,
							 size_t pos,
							 size_t n) const;
			size_t	find	(char c,
							 size_t pos = 0) const;

			void	print_data	(void) const;

		private:
			char const	_inf_wc;
			char const	_one_wc;
			char const	_esc_wc;

			void	_check_wildcard		(void) const;
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
//	size_t	rfind	(WildcardString const & str,
//					 size_t pos = npos) const;
//	size_t	rfind	(char const * s,
//					 size_t pos = npos) const;
//	size_t	rfind	(char const * s,
//					 size_t pos,
//					 size_t n) const;
//	size_t	rfind	(char c,
//					 size_t pos = npos) const;
//
//	size_t	find_first_of	(WildcardString const & str
//							 size_t pos = 0) const;
//	size_t	find_first_of	(char const * s,
//							 size_t pos = 0) const;
//	size_t	find_first_of	(char const * s,
//							 size_t pos,
//							 size_t n) const;
//	size_t	find_first_of	(char c,
//							 size_t pos = 0) const;
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

