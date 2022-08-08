/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:33:37 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 18:38:56 by rgeny            ###   ########.fr       */
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
			char const	_inf_wc;
			char const	_one_wc;
			char const	_esc_wc;

			WildcardString		(char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			WildcardString		(const WildcardString & str);
			WildcardString		(const WildcardString & str,
								 size_t pos,
								 size_t len = std::string::npos);
			WildcardString		(const std::string & str,
								 char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			WildcardString		(const char * s,
								 char const inf_wc = INFINITY_WILDCARD_CHAR,
								 char const one_wc = ONE_CHAR_WILDCARD_CHAR,
								 char const esc_wc = ESCAPE_WILDCARD_CHAR);
			WildcardString		(const char * s,
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
				std::cout	<< "WildcardString range constructor."
							<< std::endl;
			}
			~WildcardString		(void);

			WildcardString &	operator=	(WildcardString const & src);

			int		compare	(const WildcardString & str) const;
			int		compare	(size_t pos,
							 size_t len,
							 const WildcardString & str) const;
			int		compare (size_t pos,
							 size_t len,
							 const WildcardString & str,
							 size_t subpos,
							 size_t sublen) const;
			int		compare (const char * s) const;
			int		compare	(size_t pos,
							 size_t len,
							 const char * s) const;
			int		compare (size_t pos,
							 size_t len,
							 const char * s,
							 size_t n) const;

			bool	is_wildcard		(char const c) const;

		private:

			void	_check_wildcard		(void) const;
	};
	bool 	operator==	(const WildcardString & lhs,
						 const WildcardString & rhs);
	bool 	operator==	(const char * lhs,
						 const WildcardString & rhs);
	bool 	operator==	(const WildcardString & lhs,
						 const char * rhs);

	bool 	operator!=	(const WildcardString & lhs,
						 const WildcardString & rhs);
	bool 	operator!=	(const char * lhs,
						 const WildcardString & rhs);
	bool 	operator!=	(const WildcardString & lhs,
						 const char * rhs);

	bool 	operator<	(const WildcardString & lhs,
						 const WildcardString & rhs);
	bool 	operator<	(const char * lhs,
						 const WildcardString & rhs);
	bool 	operator<	(const WildcardString & lhs,
						 const char * rhs);

	bool 	operator<=	(const WildcardString & lhs,
						 const WildcardString & rhs);
	bool 	operator<=	(const char * lhs,
						 const WildcardString & rhs);
	bool 	operator<=	(const WildcardString & lhs,
						 const char * rhs);

	bool 	operator>	(const WildcardString & lhs,
						 const WildcardString & rhs);
	bool 	operator>	(const char * lhs,
						 const WildcardString & rhs);
	bool 	operator>	(const WildcardString & lhs,
						 const char * rhs);

	bool 	operator>=	(const WildcardString & lhs,
						 const WildcardString & rhs);
	bool 	operator>=	(const char * lhs,
						 const WildcardString & rhs);
	bool 	operator>=	(const WildcardString & lhs,
						 const char * rhs);
}
#endif

//public:

//

//
//	size_t	find	(const WildcardString & str
//					,size_t pos = 0) const;
//	size_t	find	(const char * s
//					,size_t pos = 0) const;
//	size_t	find	(const char * s
//					,size_t pos
//					,size_t n) const;
//	size_t	find	(char c
//					,size_t pos = 0) const;
//
//	size_t	rfind	(const WildcardString & str
//					,size_t pos = npos) const;
//	size_t	rfind	(const char * s
//					,size_t pos = npos) const;
//	size_t	rfind	(const char * s
//					,size_t pos
//					,size_t n) const;
//	size_t	rfind	(char c
//					,size_t pos = npos) const;
//
//	size_t	find_first_of	(const WildcardString & str
//							,size_t pos = 0) const;
//	size_t	find_first_of	(const char * s
//							,size_t pos = 0) const;
//	size_t	find_first_of	(const char * s
//							,size_t pos
//							,size_t n) const;
//	size_t	find_first_of	(char c
//							,size_t pos = 0) const;
//
//	size_t	find_last_of	(const WildcardString & str
//							,size_t pos = npos) const;
//	size_t	find_last_of	(const char * s
//							,size_t pos = npos) const;
//	size_t	find_last_of	(const char * s
//							,size_t pos
//							,size_t n) const;
//	size_t	find_last_of	(char c
//							,size_t pos = npos) const;
//
//	size_t	find_first_not_of	(const WildcardString & str
//								,size_t pos = 0) const;
//	size_t	find_first_not_of	(const char * s
//								,size_t pos = 0) const;
//	size_t	find_first_not_of	(const char * s
//								,size_t pos
//								,size_t n) const;
//	size_t	find_first_not_of	(char c
//								,size_t pos = 0) const;
//
//	size_t	find_last_not_of	(const WildcardString & str
//								,size_t pos = npos) const;
//	size_t	find_last_not_of	(const char * s
//								,size_t pos = npos) const;
//	size_t	find_last_not_of	(const char * s
//								,size_t pos
//								,size_t n) const;
//	size_t	find_last_not_of	(char c
//								,size_t pos = npos) const;
//
//private:
//	std::string				_out_of_range	(size_t pos
//											,size_t this_size) const;
//};

