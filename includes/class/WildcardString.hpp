/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WildcardString.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:33:37 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/06 11:34:41 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WILDCARDSTRING_HPP
# define WILDCARDSTRING_HPP

# include <iostream>

class WildcardString
{
	public:
		WildcardString	(void);
		WildcardString	(WildcardString const & src);
		~WildcardString	(void);

		WildcardString &	operator=	(WildcardString const & src);

		void	print_data	(void) const;

	private:
};

#endif

//public:
//	NotCaseString		(void);
//	NotCaseString		(const NotCaseString & str);
//	NotCaseString		(const NotCaseString & str
//						,size_t pos
//						,size_t len = std::string::npos);
//	NotCaseString		(const std::string & str);
//	NotCaseString		(const char * s);
//	NotCaseString		(const char * s
//						,size_t n);
//	NotCaseString		(size_t n
//						,char c);
//	template <class InputIterator>
//	NotCaseString		(InputIterator first
//						,InputIterator last)
//		:std::string(first, last)
//	{
//		std::cout	<< "NotCaseString range constructor."
//					<< std::endl;
//	}
//	~NotCaseString		(void);
//
//	int		compare	(const NotCaseString & str) const;
//	int		compare	(size_t pos
//					,size_t len
//					,const NotCaseString & str) const;
//	int		compare (size_t pos
//					,size_t len
//					,const NotCaseString & str
//					,size_t subpos
//					,size_t sublen) const;
//	int		compare (const char * s) const;
//	int		compare	(size_t pos
//					,size_t len
//					,const char * s) const;
//	int		compare (size_t pos
//					,size_t len
//					,const char * s
//					,size_t n) const;
//
//	size_t	find	(const NotCaseString & str
//					,size_t pos = 0) const;
//	size_t	find	(const char * s
//					,size_t pos = 0) const;
//	size_t	find	(const char * s
//					,size_t pos
//					,size_t n) const;
//	size_t	find	(char c
//					,size_t pos = 0) const;
//
//	size_t	rfind	(const NotCaseString & str
//					,size_t pos = npos) const;
//	size_t	rfind	(const char * s
//					,size_t pos = npos) const;
//	size_t	rfind	(const char * s
//					,size_t pos
//					,size_t n) const;
//	size_t	rfind	(char c
//					,size_t pos = npos) const;
//
//	size_t	find_first_of	(const NotCaseString & str
//							,size_t pos = 0) const;
//	size_t	find_first_of	(const char * s
//							,size_t pos = 0) const;
//	size_t	find_first_of	(const char * s
//							,size_t pos
//							,size_t n) const;
//	size_t	find_first_of	(char c
//							,size_t pos = 0) const;
//
//	size_t	find_last_of	(const NotCaseString & str
//							,size_t pos = npos) const;
//	size_t	find_last_of	(const char * s
//							,size_t pos = npos) const;
//	size_t	find_last_of	(const char * s
//							,size_t pos
//							,size_t n) const;
//	size_t	find_last_of	(char c
//							,size_t pos = npos) const;
//
//	size_t	find_first_not_of	(const NotCaseString & str
//								,size_t pos = 0) const;
//	size_t	find_first_not_of	(const char * s
//								,size_t pos = 0) const;
//	size_t	find_first_not_of	(const char * s
//								,size_t pos
//								,size_t n) const;
//	size_t	find_first_not_of	(char c
//								,size_t pos = 0) const;
//
//	size_t	find_last_not_of	(const NotCaseString & str
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
//	typedef std::vector<unsigned char>	CASE_OFF_TYPE;
//	static CASE_OFF_TYPE	 			_case_off;
//
//	static CASE_OFF_TYPE	_init_case_off	(void);
//	unsigned char			_cast	(char c) const;
//	std::string				_out_of_range	(size_t pos
//											,size_t this_size) const;
//};
//bool 	operator==	(const NotCaseString & lhs
//				,const NotCaseString & rhs);
//bool 	operator==	(const char * lhs
//				,const NotCaseString & rhs);
//bool 	operator==	(const NotCaseString & lhs
//				,const char * rhs);
//
//bool 	operator!=	(const NotCaseString & lhs
//				,const NotCaseString & rhs);
//bool 	operator!=	(const char * lhs
//				,const NotCaseString & rhs);
//bool 	operator!=	(const NotCaseString & lhs
//				,const char * rhs);
//
//bool 	operator<	(const NotCaseString & lhs
//				,const NotCaseString & rhs);
//bool 	operator<	(const char * lhs
//				,const NotCaseString & rhs);
//bool 	operator<	(const NotCaseString & lhs
//				,const char * rhs);
//
//bool 	operator<=	(const NotCaseString & lhs
//				,const NotCaseString & rhs);
//bool 	operator<=	(const char * lhs
//				,const NotCaseString & rhs);
//bool 	operator<=	(const NotCaseString & lhs
//				,const char * rhs);
//
//bool 	operator>	(const NotCaseString & lhs
//				,const NotCaseString & rhs);
//bool 	operator>	(const char * lhs
//				,const NotCaseString & rhs);
//bool 	operator>	(const NotCaseString & lhs
//				,const char * rhs);
//
//bool 	operator>=	(const NotCaseString & lhs
//				,const NotCaseString & rhs);
//bool 	operator>=	(const char * lhs
//				,const NotCaseString & rhs);
//bool 	operator>=	(const NotCaseString & lhs
//				,const char * rhs);
