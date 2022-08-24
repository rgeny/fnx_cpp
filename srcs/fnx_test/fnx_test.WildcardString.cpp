/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.WildcardString.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:34:59 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/24 12:39:07 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST

//template
//<
//	class T1,
//	class T2
//>
//static void	_do_test	(UNUSED T1 lhs,
//						 UNUSED T2 rhs,
//						 std::string type)
//{
//	bool	equal		= (type == "=="),
//			inf			= (type == "<" ),
//			sup			= (type == ">" );
//	size_t	size_min	= std::min(lhs.size(), rhs.size()),
//			size_max	= std::max(lhs.size(), rhs.size());
//
//	if (equal || inf || sup)
//	{
//	operator
//		_print_str(lhs, rhs);
//		_print_result	("(lhs == rhs) == equal",
//						  (lhs == rhs) == equal);
//		_print_result	("(lhs != rhs) != equal",
//						  (lhs != rhs) != equal);
//		_print_result	("(lhs < rhs) == inf",
//						  (lhs < rhs) == inf);
//		_print_result	("(lhs <= rhs) == (inf || equal)",
//						  (lhs <= rhs) == (inf || equal));
//		_print_result	("(lhs > rhs) == sup",
//						  (lhs > rhs) == (sup));
//		_print_result	("(lhs >= rhs) == (sup || equal)",
//						  (lhs >= rhs) == (sup || equal));
//	}
//	if  (equal == true)
//	{
//	int	compare	(WildcardString const & str) const
//		_print_result	("lhs.compare(rhs) == 0",
//						  lhs.compare(rhs) == 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs) == 0",
//						  lhs.compare(0, lhs.size(), rhs) == 0 );
//		_print_result	("lhs.compare(lhs.size(), 0, rhs) == 0",
//						  lhs.compare(0, lhs.size(), rhs) == 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str,
//				 size_t subpos,
//				 size_t sublen) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs, 0, rhs.size()) == 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
//		_print_result	("lhs.compare(lhs.size(), 0, rhs, 0, rhs.size()) == 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
//		_print_result	("lhs.compare(lhs.size(), 0, rhs, rhs.size(), 0) == 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
//		_print_result	("lhs.compare(0, lhs.size(), rhs, rhs.size(), 0) == 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
//	int	compare (char const * s) const;
//		_print_result	("lhs.compare(rhs.c_str()) == 0",
//						 lhs.compare(rhs.c_str()) == 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str()) == 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) == 0);
//		_print_result	("lhs.compare(lhs.size() / 2, lhs.size()) == 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) == 0);
//		_print_result	("lhs.compare(0, lhs.size() / 2, rhs.c_str()) == 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) == 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s,
//				 size_t	n) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) == 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) == 0);
//		_print_result	("lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) != 0",
//						  lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) != 0);
//
//
//	size_t	find	(WildcardString const & str,
//					 size_t pos = 0) const;
//		_print_result	("lhs.find(rhs) == 0",
//					 	 lhs.find(rhs) == 0);
//	size_t	find	(char const * s,
//					 size_t pos = 0) const;
//		_print_result	("lhs.find(rhs.c_str(), 0) == 0",
//						  lhs.find(rhs.c_str(), 0) == 0);
//	size_t	find	(char const * s,
//					 size_t pos,
//					 size_t n) const;
//		_print_result	("lhs.find(rhs.c_str(), 0, size_max) == 0",
//					 	  lhs.find(rhs.c_str(), 0, size_max) == 0);
//	size_t	find	(char c,
//					 size_t pos = 0) const;
//		_print_result	("lhs.find(rhs[0], 0) == 0",
//					 	  lhs.find(rhs[0], 0) == 0);
//
//
//	size_t	rfind	(WildcardString const & str,
//					 size_t pos = npos) const;
//		_print_result	("lhs.rfind(rhs, size_min) == 0)",
//						  lhs.rfind(rhs, size_min) == 0);
//	size_t	rfind	(char const * s,
//					 size_t pos,
//					 size_t n) const;
//		_print_result	("lhs.rfind(rhs.c_str(), size_min, size_max) == 0",
//						  lhs.rfind(rhs.c_str(), size_min, size_max) == 0);
//	size_t	rfind	(char const * s,
//					 size_t pos = npos) const;
//		_print_result	("lhs.rfind(rhs.c_str(), size_min) == 0",
//						  lhs.rfind(rhs.c_str(), size_min) == 0);
//		std::cout	<< lhs.rfind(rhs.c_str(), size_min)
//					<< std::endl;
//	size_t	rfind	(char c,
//					 size_t pos = npos) const;
//		_print_result	("lhs.rfind(rhs[0], 0) == 0",
//						  lhs.rfind(rhs[0], 0) == 0);
//
//
//	size_t	find_first_of	(WildcardString const & str,
//							 size_t pos = 0) const;
//		_print_result	("lhs.find_first_of(rhs) == 0",
//						  lhs.find_first_of(rhs) == 0);
//	size_t	find_first_of	(char const * s,
//							 size_t pos = 0) const;
//		_print_result	("lhs.find_first_of(rhs.c_str()) == 0",
//						  lhs.find_first_of(rhs.c_str()) == 0);
//	size_t	find_first_of	(char const * s,
//							 size_t pos,
//							 size_t n) const;
//		_print_result	("lhs.find_first_of(rhs.c_str(), 0, size_max) == 0",
//						  lhs.find_first_of(rhs.c_str(), 0, size_max) == 0);
//	size_t	find_first_of	(char c,
//							 size_t pos = 0) const;
//		_print_result	("lhs.find_first_of(rhs[0], 0) == 0",
//						  lhs.find_first_of(rhs[0], 0) == 0);
//	}
//	else if (inf == true)
//	{
//	int	compare	(WildcardString const & str) const
//		_print_result	("lhs.compare(rhs) < 0",
//						  lhs.compare(rhs) < 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs) < 0",
//						  lhs.compare(0, lhs.size(), rhs) < 0 );
//		_print_result	("lhs.compare(lhs.size(), 0, rhs) < 0",
//						  lhs.compare(0, lhs.size(), rhs) < 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str,
//				 size_t subpos,
//				 size_t sublen) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs, 0, rhs.size()) < 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) < 0);
//		_print_result	("lhs.compare(lhs.size(), 0, rhs, 0, rhs.size()) < 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) < 0);
//		_print_result	("lhs.compare(lhs.size(), 0, rhs, rhs.size(), 0) < 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) < 0);
//		_print_result	("lhs.compare(0, lhs.size(), rhs, rhs.size(), 0) < 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) < 0);
//	int	compare (char const * s) const;
//		_print_result	("lhs.compare(rhs.c_str()) < 0",
//						 lhs.compare(rhs.c_str()) < 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str()) < 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) < 0);
//		_print_result	("lhs.compare(lhs.size() / 2, lhs.size()) < 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) < 0);
//		_print_result	("lhs.compare(0, lhs.size() / 2, rhs.c_str()) < 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) < 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s,
//				 size_t	n) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) < 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) < 0);
//		_print_result	("lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) < 0",
//						  lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) < 0);
//
//
//	size_t	find	(WildcardString const & str,
//					 size_t pos = 0) const;
//		_print_value	("lhs.find(rhs) < 0",
//					 	 lhs.find(rhs) < 0);
//	size_t	find	(char const * s,
//					 size_t pos = 0) const;
//		_print_value	("lhs.find(rhs.c_str(), 0) < 0",
//						  lhs.find(rhs.c_str(), 0) < 0);
//	size_t	find	(char const * s,
//					 size_t pos,
//					 size_t n) const;
//		_print_value	("lhs.find(rhs.c_str(), 0, size_max) < 0",
//					 	  lhs.find(rhs.c_str(), 0, size_max) < 0);
//	size_t	find	(char c,
//					 size_t pos = 0) const;
//		_print_value	("lhs.find(rhs[0], 0) < 0",
//					 	  lhs.find(rhs[0], 0) < 0);
//
//
//	size_t	rfind	(WildcardString const & str,
//					 size_t pos = npos) const;
//		_print_value	("lhs.rfind(rhs, size_min) < size_min)",
//						  lhs.rfind(rhs, size_min) < size_min);
//	size_t	rfind	(char const * s,
//					 size_t pos,
//					 size_t n) const;
//		_print_value	("lhs.rfind(rhs.c_str(), size_min, size_max) < size_min",
//						  lhs.rfind(rhs.c_str(), size_min, size_max) < size_min);
//	size_t	rfind	(char const * s,
//					 size_t pos = npos) const;
//		_print_value	("lhs.rfind(rhs.c_str(), size_min) < size_min",
//						  lhs.rfind(rhs.c_str(), size_min) < size_min);
//	size_t	rfind	(char c,
//					 size_t pos = npos) const;
//		_print_value	("lhs.rfind(rhs[0], 0) < 0",
//						  lhs.rfind(rhs[0], 0) < 0);
//
//
//	size_t	find_first_of	(WildcardString const & str,
//							 size_t pos = 0) const;
//		_print_value	("lhs.find_first_of(rhs) < 0",
//						  lhs.find_first_of(rhs) < 0);
//	size_t	find_first_of	(char const * s,
//							 size_t pos = 0) const;
//		_print_value	("lhs.find_first_of(rhs.c_str()) < 0",
//						  lhs.find_first_of(rhs.c_str()) < 0);
//	size_t	find_first_of	(char const * s,
//							 size_t pos,
//							 size_t n) const;
//		_print_value	("lhs.find_first_of(rhs.c_str(), 0, size_max) < 0",
//						  lhs.find_first_of(rhs.c_str(), 0, size_max) < 0);
//	size_t	find_first_of	(char c,
//							 size_t pos = 0) const;
//		_print_value	("lhs.find_first_of(rhs[0], 0) < 0",
//						  lhs.find_first_of(rhs[0], 0) < 0);
//
//	}
//	else if (sup == true)
//	{
//	int	compare	(WildcardString const & str) const
//		_print_result	("lhs.compare(rhs) > 0",
//						  lhs.compare(rhs) > 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs) > 0",
//						  lhs.compare(0, lhs.size(), rhs) > 0 );
//		_print_result	("lhs.compare(lhs.size(), 0, rhs) > 0",
//						  lhs.compare(0, lhs.size(), rhs) > 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str,
//				 size_t subpos,
//				 size_t sublen) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs, 0, rhs.size()) > 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) > 0);
//		_print_result	("lhs.compare(lhs.size(), 0, rhs, 0, rhs.size()) > 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) > 0);
//		_print_result	("lhs.compare(lhs.size(), 0, rhs, rhs.size(), 0) > 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) > 0);
//		_print_result	("lhs.compare(0, lhs.size(), rhs, rhs.size(), 0) > 0",
//						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) > 0);
//	int	compare (char const * s) const;
//		_print_result	("lhs.compare(rhs.c_str()) > 0",
//						 lhs.compare(rhs.c_str()) > 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str()) > 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) > 0);
//		_print_result	("lhs.compare(lhs.size() / 2, lhs.size()) > 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) > 0);
//		_print_result	("lhs.compare(0, lhs.size() / 2, rhs.c_str()) > 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str()) > 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s,
//				 size_t	n) const;
//		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) > 0",
//						  lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) > 0);
//		_print_result	("lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) > 0",
//						  lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) > 0);
//
//
//	size_t	find	(WildcardString const & str,
//					 size_t pos = 0) const;
//		_print_value	("lhs.find(rhs) > 0",
//					 	 lhs.find(rhs) > 0);
//	size_t	find	(char const * s,
//					 size_t pos = 0) const;
//		_print_value	("lhs.find(rhs.c_str(), 0) > 0",
//						  lhs.find(rhs.c_str(), 0) > 0);
//	size_t	find	(char const * s,
//					 size_t pos,
//					 size_t n) const;
//		_print_value	("lhs.find(rhs.c_str(), 0, size_max) > 0",
//					 	  lhs.find(rhs.c_str(), 0, size_max) > 0);
//	size_t	find	(char c,
//					 size_t pos = 0) const;
//		_print_value	("lhs.find(rhs[0], 0) > 0",
//					 	  lhs.find(rhs[0], 0) > 0);
//
//
//	size_t	rfind	(WildcardString const & str,
//					 size_t pos = npos) const;
//		_print_value	("lhs.rfind(rhs, size_min) > size_min)",
//						  lhs.rfind(rhs, size_min) > size_min);
//	size_t	rfind	(char const * s,
//					 size_t pos,
//					 size_t n) const;
//		_print_value	("lhs.rfind(rhs.c_str(), size_min, size_max) > size_min",
//						  lhs.rfind(rhs.c_str(), size_min, size_max) > size_min);
//	size_t	rfind	(char const * s,
//					 size_t pos = npos) const;
//		_print_value	("lhs.rfind(rhs.c_str(), size_min) > size_min",
//						  lhs.rfind(rhs.c_str(), size_min) > size_min);
//	size_t	rfind	(char c,
//					 size_t pos = npos) const;
//		_print_value	("lhs.rfind(rhs[0], 0) > 0",
//						  lhs.rfind(rhs[0], 0) > 0);
//
//
//	size_t	find_first_of	(WildcardString const & str,
//							 size_t pos = 0) const;
//		_print_value	("lhs.find_first_of(rhs) > 0",
//						  lhs.find_first_of(rhs) > 0);
//	size_t	find_first_of	(char const * s,
//							 size_t pos = 0) const;
//		_print_value	("lhs.find_first_of(rhs.c_str()) > 0",
//						  lhs.find_first_of(rhs.c_str()) > 0);
//	size_t	find_first_of	(char const * s,
//							 size_t pos,
//							 size_t n) const;
//		_print_value	("lhs.find_first_of(rhs.c_str(), 0, size_max) > 0",
//						  lhs.find_first_of(rhs.c_str(), 0, size_max) > 0);
//	size_t	find_first_of	(char c,
//							 size_t pos = 0) const;
//		_print_value	("lhs.find_first_of(rhs[0], 0) > 0",
//						  lhs.find_first_of(rhs[0], 0) > 0);
//
//	}
//	if (equal || inf || sup)
//	{
//	size_t	find__last_of	(WilcardString const & str,
//							 size_t pos = npos) const;
//		_print_value	("lhs.find_last_of(rhs)",
//						  lhs.find_last_of(rhs));
//	size_t	find__last_of	(char const * s,
//							 size_t pos = npos) const;
//		_print_value	("lhs.find_last_of(rhs.c_str())",
//						  lhs.find_last_of(rhs.c_str()));
//	size_t	find__last_of	(char const * s,
//							 size_t pos,
//							 size_t n) const;
//		_print_value	("lhs.find_last_of(rhs.c_str(), 0, size_max)",
//						  lhs.find_last_of(rhs.c_str(), 0, size_max));
//	size_t	find__last_of	(char c,
//							 size_t pos = npos) const;
//		_print_value	("lhs.find_last_of(rhs[0])",
//						  lhs.find_last_of(rhs[0]));
//
//
//	size_t	find_first_not_of	(WildcardString const & str,
//								 size_t pos = 0) const;
//		_print_value	("lhs.find_first_not_of(rhs)",
//						  lhs.find_first_not_of(rhs));
//	size_t	find_first_not_of	(char const * s,
//								 size_t pos = 0) const;
//		_print_value	("lhs.find_first_not_of(rhs.c_str())",
//						  lhs.find_first_not_of(rhs.c_str()));
//	size_t	find_first_not_of	(char const * s,
//								 size_t pos,
//								 size_t n) const;
//		_print_value	("lhs.find_first_not_of(rhs.c_str(), 0, size_max)",
//						  lhs.find_first_not_of(rhs.c_str(), 0, size_max));
//	size_t	find_first_not_of	(char c,
//								 size_t pos = 0) const;
//		_print_value	("lhs.find_first_not_of(rhs[0])",
//						  lhs.find_first_not_of(rhs[0]));
//
//
//	size_t	find_last_not_of	(WildcardString const & str,
//								 size_t pos = 0) const;
//		_print_value	("lhs.find_last_not_of(rhs)",
//						  lhs.find_last_not_of(rhs));
//	size_t	find_last_not_of	(char const * s,
//								 size_t pos = 0) const;
//		_print_value	("lhs.find_last_not_of(rhs.c_str())",
//						  lhs.find_last_not_of(rhs.c_str()));
//	size_t	find_last_not_of	(char const * s,
//								 size_t pos,
//								 size_t n) const;
//		_print_value	("lhs.find_last_not_of(rhs.c_str(), 0, size_max)",
//						  lhs.find_last_not_of(rhs.c_str(), 0, size_max));
//	size_t	find_last_not_of	(char c,
//								 size_t pos = 0) const;
//		_print_value	("lhs.find_last_not_of(rhs[0])",
//						  lhs.find_last_not_of(rhs[0]));
//	}
//}


//template
//<
//	class T1,
//	class T2
//>
//static void	_print_str	(T1 lhs,
//						 T2 rhs)
//{
//	std::cout	<< BRIGHT UNDERSCORE "lhs =" RESET " "
//				<< lhs
//				<< std::endl
//				<< BRIGHT UNDERSCORE "rhs =" RESET " "
//				<< rhs
//				<< std::endl;
//}
//
//static void	_print_result	(std::string msg,
//							 bool result)
//{
//	if (result == true)
//		std::cout	<< GREEN_TEXT;
//	else
//		std::cout	<< RED_TEXT;
//	std::cout	<< msg
//				<< RESET
//				<< std::endl;
//}

//static void _print_value	(std::string msg,
//							 int value)
//{
//	std::cout	<< MAGENTA_TEXT
//				<< msg
//				<< " : "
//				<< value
//				<< RESET
//				<< std::endl;
//}
//

#define _print_string(str)	str.resize(str.size() - 1); \
							std::cout	<< UNDERSCORE \
										<< #str \
										<< RESET " = \"" \
										<< str \
										<< "\"" \
										<< std::endl;


void	fnx_test::WildcardString	(char ** argv)
{
	std::string	path	= fs::path(argv[0]).parent_path().c_str();
	path				+="/file_test/";
	fnx::WildcardString	empty,
						sample(fnx::file_to_str(path + "sample")),
						short1(fnx::file_to_str(path + "short1")),
						short2(fnx::file_to_str(path + "short2")),
						long1(fnx::file_to_str(path + "long_line")),
						long2(fnx::file_to_str(path + "long_line2")),
						ast_sample(fnx::file_to_str(path + "asterisk_sample")),
						ast_short1(fnx::file_to_str(path + "asterisk_short1")),
						ast_short2(fnx::file_to_str(path + "asterisk_short2")),
						ast_long1(fnx::file_to_str(path + "asterisk_long1")),
						ast_long2(fnx::file_to_str(path + "asterisk_long2")),
						one_sample(fnx::file_to_str(path + "interrogation_sample")),
						one_short1(fnx::file_to_str(path + "interrogation_short1")),
						one_short2(fnx::file_to_str(path + "interrogation_short2")),
						one_long1(fnx::file_to_str(path + "interrogation_long1")),
						one_long2(fnx::file_to_str(path + "interrogation_long2")),
						esc_sample(fnx::file_to_str(path + "escape_sample")),
						esc_short1(fnx::file_to_str(path + "escape_short1")),
						esc_short2(fnx::file_to_str(path + "escape_short2")),
						esc_long1(fnx::file_to_str(path + "escape_long1")),
						esc_long2(fnx::file_to_str(path + "escape_long2")),
						all_sample(fnx::file_to_str(path + "all_wildcard_sample")),
						all_short1(fnx::file_to_str(path + "all_wildcard_short1")),
						all_short2(fnx::file_to_str(path + "all_wildcard_short2")),
						all_long1(fnx::file_to_str(path + "all_wildcard_long1")),
						all_long2(fnx::file_to_str(path + "all_wildcard_long2")),
						other1("abc\\?def\n"),
						other2("abc?def\n"),
						other3("abc\\*def\n"),
						other4("abc\\\\def\n"),
						other5("a*f\n"),
						other6("abcdef\n"),
						other7("abcdefg\n");
	print_category("WildcardString test");
	std::cout	<< UNDERSCORE "string list : " RESET
				<< std::endl;
	_print_string(sample);
	_print_string(short1);
	_print_string(short2);
	_print_string(long1);
	_print_string(long2);
	_print_string(ast_sample);
	_print_string(ast_short1);
	_print_string(ast_short2);
	_print_string(ast_long1);
	_print_string(ast_long2);
	_print_string(one_sample);
	_print_string(one_short1);
	_print_string(one_short2);
	_print_string(one_long1);
	_print_string(one_long2);
	_print_string(esc_sample);
	_print_string(esc_short1);
	_print_string(esc_short2);
	_print_string(esc_long1);
	_print_string(esc_long2);
	_print_string(all_sample);
	_print_string(all_short1);
	_print_string(all_short2);
	_print_string(all_long1);
	_print_string(all_long2);
	_print_string(other1);
	_print_string(other2);
	_print_string(other3);
	_print_string(other4);
	_print_string(other5);
	_print_string(other6);
	_print_string(other7);


	print_category("int fnx::Wildcard::compare (fnx::WildcardString const & str) const");
	{
		PRINT_TEST	(sample.compare(sample) == 0);
		PRINT_TEST	(empty.compare(empty) == 0);
		PRINT_TEST	(short1.compare(short1) == 0);
		PRINT_TEST	(short2.compare(short2) == 0);
		PRINT_TEST	(long1.compare(long1) == 0);
		PRINT_TEST	(long2.compare(long2) == 0);
		PRINT_TEST	(ast_sample.compare(ast_sample) == 0);
		PRINT_TEST	(ast_short1.compare(ast_short1) == 0);
		PRINT_TEST	(ast_short2.compare(ast_short2) == 0);
		PRINT_TEST	(ast_long1.compare(ast_long1) == 0);
		PRINT_TEST	(ast_long2.compare(ast_long2) == 0);
		PRINT_TEST	(one_sample.compare(one_sample) == 0);
		PRINT_TEST	(one_short1.compare(one_short1) == 0);
		PRINT_TEST	(one_short2.compare(one_short2) == 0);
		PRINT_TEST	(one_long1.compare(one_long1) == 0);
		PRINT_TEST	(one_long2.compare(one_long2) == 0);
		PRINT_TEST	(esc_sample.compare(esc_sample) == 0);
		PRINT_TEST	(esc_short1.compare(esc_short1) == 0);
		PRINT_TEST	(esc_short2.compare(esc_short2) == 0);
		PRINT_TEST	(esc_long1.compare(esc_long1) == 0);
		PRINT_TEST	(esc_long2.compare(esc_long2) == 0);
		PRINT_TEST	(all_sample.compare(all_sample) == 0);
		PRINT_TEST	(all_short1.compare(all_short1) == 0);
		PRINT_TEST	(all_short2.compare(all_short2) == 0);
		PRINT_TEST	(all_long1.compare(all_long1) == 0);
		PRINT_TEST	(all_long2.compare(all_long2) == 0);

		PRINT_TEST	(sample.compare(sample.substr(0, sample.size() - 1)) != 0);

		PRINT_TEST	(empty.compare(sample) != 0);
		PRINT_TEST	(empty.compare(short1) != 0);
		PRINT_TEST	(empty.compare(short2) != 0);
		PRINT_TEST	(empty.compare(long1) != 0);
		PRINT_TEST	(empty.compare(long2) != 0);
		PRINT_TEST	(empty.compare(ast_sample) == 0);
		PRINT_TEST	(empty.compare(ast_short1) != 0);
		PRINT_TEST	(empty.compare(ast_long1) != 0);
		PRINT_TEST	(empty.compare(one_sample) != 0);
		PRINT_TEST	(empty.compare(one_short1) != 0);
		PRINT_TEST	(empty.compare(one_long1) != 0);
		PRINT_TEST	(empty.compare(esc_sample) != 0);
		PRINT_TEST	(empty.compare(esc_short1) != 0);
		PRINT_TEST	(empty.compare(esc_long1) != 0);
		PRINT_TEST	(empty.compare(all_sample) != 0);
		PRINT_TEST	(empty.compare(all_short1) != 0);
		PRINT_TEST	(empty.compare(all_long1) != 0);

		PRINT_TEST	(sample.compare(empty) != 0);
		PRINT_TEST	(sample.compare(short1) != 0);
		PRINT_TEST	(sample.compare(short2) != 0);
		PRINT_TEST	(sample.compare(long1) != 0);
		PRINT_TEST	(sample.compare(long2) != 0);
		PRINT_TEST	(sample.compare(ast_sample) == 0);
		PRINT_TEST	(sample.compare(ast_short1) != 0);
		PRINT_TEST	(sample.compare(ast_long1) != 0);
		PRINT_TEST	(sample.compare(one_sample) == 0);
		PRINT_TEST	(sample.compare(one_short1) != 0);
		PRINT_TEST	(sample.compare(one_long1) != 0);
		PRINT_TEST	(sample.compare(esc_sample) == 0);
		PRINT_TEST	(sample.compare(esc_short1) != 0);
		PRINT_TEST	(sample.compare(esc_long1) != 0);
		PRINT_TEST	(sample.compare(all_sample) == 0);
		PRINT_TEST	(sample.compare(all_short1) != 0);
		PRINT_TEST	(sample.compare(all_long1) != 0);
		
		PRINT_TEST	(short1.compare(sample) != 0);
		PRINT_TEST	(short1.compare(empty) != 0);
		PRINT_TEST	(short1.compare(short2) != 0);
		PRINT_TEST	(short1.compare(long1) != 0);
		PRINT_TEST	(short1.compare(long2) != 0);
		PRINT_TEST	(short1.compare(ast_sample) == 0);
		PRINT_TEST	(short1.compare(ast_short1) == 0);
		PRINT_TEST	(short1.compare(ast_long1) != 0);
		PRINT_TEST	(short1.compare(one_sample) != 0);
		PRINT_TEST	(short1.compare(one_short1) != 0);
		PRINT_TEST	(short1.compare(one_long1) != 0);
		PRINT_TEST	(short1.compare(esc_sample) != 0);
		PRINT_TEST	(short1.compare(esc_short1) == 0);
		PRINT_TEST	(short1.compare(esc_long1) != 0);
		PRINT_TEST	(short1.compare(all_sample) != 0);
		PRINT_TEST	(short1.compare(all_short1) != 0);
		PRINT_TEST	(short1.compare(all_long1) != 0);

		PRINT_TEST	(long1.compare(sample) != 0);
		PRINT_TEST	(long1.compare(short1) != 0);
		PRINT_TEST	(long1.compare(short2) != 0);
		PRINT_TEST	(long1.compare(empty) != 0);
		PRINT_TEST	(long1.compare(long2) != 0);
		PRINT_TEST	(long1.compare(ast_sample) == 0);
		PRINT_TEST	(long1.compare(ast_short1) != 0);
		PRINT_TEST	(long1.compare(ast_long1) == 0);
		PRINT_TEST	(long1.compare(one_sample) != 0);
		PRINT_TEST	(long1.compare(one_short1) != 0);
		PRINT_TEST	(long1.compare(one_long1) == 0);
		PRINT_TEST	(long1.compare(esc_sample) != 0);
		PRINT_TEST	(long1.compare(esc_short1) != 0);
		PRINT_TEST	(long1.compare(esc_long1) == 0);
		PRINT_TEST	(long1.compare(all_sample) != 0);
		PRINT_TEST	(long1.compare(all_short1) != 0);
		PRINT_TEST	(long1.compare(all_long1) == 0);
	
		PRINT_TEST	(ast_sample.compare(sample) == 0);
		PRINT_TEST	(ast_sample.compare(short1) == 0);
		PRINT_TEST	(ast_sample.compare(short2) == 0);
		PRINT_TEST	(ast_sample.compare(empty) == 0);
		PRINT_TEST	(ast_sample.compare(long2) == 0);
		PRINT_TEST	(ast_sample.compare(one_sample) == 0);
		PRINT_TEST	(ast_sample.compare(one_short1) == 0);
		PRINT_TEST	(ast_sample.compare(one_long1) == 0);
		PRINT_TEST	(ast_sample.compare(esc_sample) == 0);
		PRINT_TEST	(ast_sample.compare(esc_short1) == 0);
		PRINT_TEST	(ast_sample.compare(esc_long1) == 0);
		PRINT_TEST	(ast_sample.compare(all_sample) == 0);
		PRINT_TEST	(ast_sample.compare(all_short1) == 0);
		PRINT_TEST	(ast_sample.compare(all_long1) == 0);

		PRINT_TEST	(ast_short1.compare(sample) != 0);
		PRINT_TEST	(ast_short1.compare(short1) == 0);
		PRINT_TEST	(ast_short1.compare(short2) != 0);
		PRINT_TEST	(ast_short1.compare(empty) != 0);
		PRINT_TEST	(ast_short1.compare(long2) != 0);
		PRINT_TEST	(ast_short1.compare(one_sample) == 0);
		PRINT_TEST	(ast_short1.compare(one_short1) == 0);
		PRINT_TEST	(ast_short1.compare(one_long1) != 0);
		PRINT_TEST	(ast_short1.compare(esc_sample) != 0);
		PRINT_TEST	(ast_short1.compare(esc_short1) == 0);
		PRINT_TEST	(ast_short1.compare(esc_long1) != 0);
		PRINT_TEST	(ast_short1.compare(all_sample) != 0);
		PRINT_TEST	(ast_short1.compare(all_short1) == 0);
		PRINT_TEST	(ast_short1.compare(all_long1) != 0);

		PRINT_TEST	(ast_long1.compare(sample) != 0);
		PRINT_TEST	(ast_long1.compare(short1) != 0);
		PRINT_TEST	(ast_long1.compare(short2) != 0);
		PRINT_TEST	(ast_long1.compare(empty) != 0);
		PRINT_TEST	(ast_long1.compare(long2) != 0);
		PRINT_TEST	(ast_long1.compare(one_sample) != 0);
		PRINT_TEST	(ast_long1.compare(one_short1) != 0);
		PRINT_TEST	(ast_long1.compare(one_long1) == 0);
		PRINT_TEST	(ast_long1.compare(esc_sample) != 0);
		PRINT_TEST	(ast_long1.compare(esc_short1) != 0);
		PRINT_TEST	(ast_long1.compare(esc_long1) == 0);
		PRINT_TEST	(ast_long1.compare(all_sample) != 0);
		PRINT_TEST	(ast_long1.compare(all_short1) != 0);
		PRINT_TEST	(ast_long1.compare(all_long1) == 0);

		PRINT_TEST	(one_sample.compare(sample) == 0);
		PRINT_TEST	(one_sample.compare(short1) != 0);
		PRINT_TEST	(one_sample.compare(short2) != 0);
		PRINT_TEST	(one_sample.compare(empty) != 0);
		PRINT_TEST	(one_sample.compare(long2) != 0);
		PRINT_TEST	(one_sample.compare(ast_sample) == 0);
		PRINT_TEST	(one_sample.compare(ast_short1) == 0);
		PRINT_TEST	(one_sample.compare(ast_long1) != 0);
		PRINT_TEST	(one_sample.compare(esc_sample) == 0);
		PRINT_TEST	(one_sample.compare(esc_short1) != 0);
		PRINT_TEST	(one_sample.compare(esc_long1) != 0);
		PRINT_TEST	(one_sample.compare(all_sample) == 0);
		PRINT_TEST	(one_sample.compare(all_short1) == 0);
		PRINT_TEST	(one_sample.compare(all_long1) != 0);
	
		PRINT_TEST	(one_short1.compare(sample) != 0);
		PRINT_TEST	(one_short1.compare(short1) != 0);
		PRINT_TEST	(one_short1.compare(short2) != 0);
		PRINT_TEST	(one_short1.compare(empty) != 0);
		PRINT_TEST	(one_short1.compare(long2) != 0);
		PRINT_TEST	(one_short1.compare(ast_sample) == 0);
		PRINT_TEST	(one_short1.compare(ast_short1) == 0);
		PRINT_TEST	(one_short1.compare(ast_long1) != 0);
		PRINT_TEST	(one_short1.compare(esc_sample) != 0);
		PRINT_TEST	(one_short1.compare(esc_short1) != 0);
		PRINT_TEST	(one_short1.compare(esc_long1) != 0);
		PRINT_TEST	(one_short1.compare(all_sample) != 0);
		PRINT_TEST	(one_short1.compare(all_short1) == 0);
		PRINT_TEST	(one_short1.compare(all_long1) != 0);

		PRINT_TEST	(one_long1.compare(sample) != 0);
		PRINT_TEST	(one_long1.compare(short1) != 0);
		PRINT_TEST	(one_long1.compare(short2) != 0);
		PRINT_TEST	(one_long1.compare(empty) != 0);
		PRINT_TEST	(one_long1.compare(long2) != 0);
		PRINT_TEST	(one_long1.compare(ast_sample) == 0);
		PRINT_TEST	(one_long1.compare(ast_short1) != 0);
		PRINT_TEST	(one_long1.compare(ast_long1) == 0);
		PRINT_TEST	(one_long1.compare(esc_sample) != 0);
		PRINT_TEST	(one_long1.compare(esc_short1) != 0);
		PRINT_TEST	(one_long1.compare(esc_long1) == 0);
		PRINT_TEST	(one_long1.compare(all_sample) != 0);
		PRINT_TEST	(one_long1.compare(all_short1) != 0);
		PRINT_TEST	(one_long1.compare(all_long1) == 0);

		PRINT_TEST	(esc_sample.compare(sample) == 0);
		PRINT_TEST	(esc_sample.compare(short1) != 0);
		PRINT_TEST	(esc_sample.compare(short2) != 0);
		PRINT_TEST	(esc_sample.compare(empty) != 0);
		PRINT_TEST	(esc_sample.compare(long2) != 0);
		PRINT_TEST	(esc_sample.compare(ast_sample) == 0);
		PRINT_TEST	(esc_sample.compare(ast_short1) != 0);
		PRINT_TEST	(esc_sample.compare(ast_long1) != 0);
		PRINT_TEST	(esc_sample.compare(one_sample) == 0);
		PRINT_TEST	(esc_sample.compare(one_short1) != 0);
		PRINT_TEST	(esc_sample.compare(one_long1) != 0);
		PRINT_TEST	(esc_sample.compare(all_sample) == 0);
		PRINT_TEST	(esc_sample.compare(all_short1) != 0);
		PRINT_TEST	(esc_sample.compare(all_long1) != 0);
	
		PRINT_TEST	(esc_short1.compare(sample) != 0);
		PRINT_TEST	(esc_short1.compare(short1) == 0);
		PRINT_TEST	(esc_short1.compare(short2) != 0);
		PRINT_TEST	(esc_short1.compare(empty) != 0);
		PRINT_TEST	(esc_short1.compare(long2) != 0);
		PRINT_TEST	(esc_short1.compare(ast_sample) == 0);
		PRINT_TEST	(esc_short1.compare(ast_short1) == 0);
		PRINT_TEST	(esc_short1.compare(ast_long1) != 0);
		PRINT_TEST	(esc_short1.compare(one_sample) != 0);
		PRINT_TEST	(esc_short1.compare(one_short1) != 0);
		PRINT_TEST	(esc_short1.compare(one_long1) != 0);
		PRINT_TEST	(esc_short1.compare(all_sample) != 0);
		PRINT_TEST	(esc_short1.compare(all_short1) != 0);
		PRINT_TEST	(esc_short1.compare(all_long1) != 0);

		PRINT_TEST	(esc_long1.compare(sample) != 0);
		PRINT_TEST	(esc_long1.compare(short1) != 0);
		PRINT_TEST	(esc_long1.compare(short2) != 0);
		PRINT_TEST	(esc_long1.compare(empty) != 0);
		PRINT_TEST	(esc_long1.compare(long2) != 0);
		PRINT_TEST	(esc_long1.compare(ast_sample) == 0);
		PRINT_TEST	(esc_long1.compare(ast_short1) != 0);
		PRINT_TEST	(esc_long1.compare(ast_long1) == 0);
		PRINT_TEST	(esc_long1.compare(one_sample) != 0);
		PRINT_TEST	(esc_long1.compare(one_short1) != 0);
		PRINT_TEST	(esc_long1.compare(one_long1) == 0);
		PRINT_TEST	(esc_long1.compare(all_sample) != 0);
		PRINT_TEST	(esc_long1.compare(all_short1) != 0);
		PRINT_TEST	(esc_long1.compare(all_long1) == 0);

		PRINT_TEST	(all_sample.compare(sample) == 0);
		PRINT_TEST	(all_sample.compare(short1) != 0);
		PRINT_TEST	(all_sample.compare(short2) != 0);
		PRINT_TEST	(all_sample.compare(empty) != 0);
		PRINT_TEST	(all_sample.compare(long2) != 0);
		PRINT_TEST	(all_sample.compare(ast_sample) == 0);
		PRINT_TEST	(all_sample.compare(ast_short1) != 0);
		PRINT_TEST	(all_sample.compare(ast_long1) != 0);
		PRINT_TEST	(all_sample.compare(one_sample) == 0);
		PRINT_TEST	(all_sample.compare(one_short1) != 0);
		PRINT_TEST	(all_sample.compare(one_long1) != 0);
		PRINT_TEST	(all_sample.compare(esc_sample) == 0);
		PRINT_TEST	(all_sample.compare(esc_short1) != 0);
		PRINT_TEST	(all_sample.compare(esc_long1) != 0);
	
		PRINT_TEST	(all_short1.compare(sample) != 0);
		PRINT_TEST	(all_short1.compare(short1) != 0);
		PRINT_TEST	(all_short1.compare(short2) != 0);
		PRINT_TEST	(all_short1.compare(empty) != 0);
		PRINT_TEST	(all_short1.compare(long2) != 0);
		PRINT_TEST	(all_short1.compare(ast_sample) == 0);
		PRINT_TEST	(all_short1.compare(ast_short1) == 0);
		PRINT_TEST	(all_short1.compare(ast_long1) != 0);
		PRINT_TEST	(all_short1.compare(one_sample) == 0);
		PRINT_TEST	(all_short1.compare(one_short1) == 0);
		PRINT_TEST	(all_short1.compare(one_long1) != 0);
		PRINT_TEST	(all_short1.compare(esc_sample) != 0);
		PRINT_TEST	(all_short1.compare(esc_short1) != 0);
		PRINT_TEST	(all_short1.compare(esc_long1) != 0);

		PRINT_TEST	(all_long1.compare(sample) != 0);
		PRINT_TEST	(all_long1.compare(short1) != 0);
		PRINT_TEST	(all_long1.compare(short2) != 0);
		PRINT_TEST	(all_long1.compare(empty) != 0);
		PRINT_TEST	(all_long1.compare(long2) != 0);
		PRINT_TEST	(all_long1.compare(ast_sample) == 0);
		PRINT_TEST	(all_long1.compare(ast_short1) != 0);
		PRINT_TEST	(all_long1.compare(ast_long1) == 0);
		PRINT_TEST	(all_long1.compare(one_sample) != 0);
		PRINT_TEST	(all_long1.compare(one_short1) != 0);
		PRINT_TEST	(all_long1.compare(one_long1) == 0);
		PRINT_TEST	(all_long1.compare(esc_sample) != 0);
		PRINT_TEST	(all_long1.compare(esc_short1) != 0);
		PRINT_TEST	(all_long1.compare(esc_long1) == 0);

		PRINT_TEST	(other1.compare(other2) == 0);
		PRINT_TEST	(other1.compare(other3) != 0);
		PRINT_TEST	(other1.compare(other4) != 0);
		PRINT_TEST	(other1.compare(other5) == 0);
		PRINT_TEST	(other1.compare(other6) != 0);
		PRINT_TEST	(other1.compare(other7) != 0);

		PRINT_TEST	(other2.compare(other1) == 0);
		PRINT_TEST	(other2.compare(other3) == 0);
		PRINT_TEST	(other2.compare(other4) == 0);
		PRINT_TEST	(other2.compare(other5) == 0);
		PRINT_TEST	(other2.compare(other6) != 0);
		PRINT_TEST	(other2.compare(other7) != 0);

		PRINT_TEST	(other3.compare(other1) != 0);
		PRINT_TEST	(other3.compare(other2) == 0);
		PRINT_TEST	(other3.compare(other4) != 0);
		PRINT_TEST	(other3.compare(other5) == 0);
		PRINT_TEST	(other3.compare(other6) != 0);
		PRINT_TEST	(other3.compare(other7) != 0);

		PRINT_TEST	(other4.compare(other1) != 0);
		PRINT_TEST	(other4.compare(other2) == 0);
		PRINT_TEST	(other4.compare(other3) != 0);
		PRINT_TEST	(other4.compare(other5) == 0);
		PRINT_TEST	(other4.compare(other6) != 0);
		PRINT_TEST	(other4.compare(other7) != 0);

		PRINT_TEST	(other5.compare(other1) == 0);
		PRINT_TEST	(other5.compare(other2) == 0);
		PRINT_TEST	(other5.compare(other3) == 0);
		PRINT_TEST	(other5.compare(other4) == 0);
		PRINT_TEST	(other5.compare(other6) == 0);
		PRINT_TEST	(other5.compare(other7) != 0);

		PRINT_TEST	(other6.compare(other1) != 0);
		PRINT_TEST	(other6.compare(other2) != 0);
		PRINT_TEST	(other6.compare(other3) != 0);
		PRINT_TEST	(other6.compare(other4) != 0);
		PRINT_TEST	(other6.compare(other5) == 0);
		PRINT_TEST	(other6.compare(other7) != 0);

		PRINT_TEST	(other7.compare(other1) != 0);
		PRINT_TEST	(other7.compare(other2) != 0);
		PRINT_TEST	(other7.compare(other3) != 0);
		PRINT_TEST	(other7.compare(other4) != 0);
		PRINT_TEST	(other7.compare(other5) != 0);
		PRINT_TEST	(other7.compare(other6) != 0);
	}
//						other1("abc\\?def\n"),
//						other2("abc?def\n"),
//						other3("abc\\*def\n"),
//						other4("abc\\\\def\n"),
//						other5("a*f\n"),
//						other6("abcdef\n"),
//						other7("abcdefg\n");
	
//	using namespace fnx;
//
//	fnx::WildcardString	sample("abc"),
//						short1("a"),
//						short2("b"),
//
//
//	print_category("WildcardString (compare WildcardString with WildcardString)");
//
//	print_category("int fnx::WildcardString::compare (fnx::WildcardString const & str) const");
//	{
//		print_test	("same string");
//		_print_result	("sample.compare(sample) == 0",
//						  sample.compare(sample) == 0);
//
//		print_test	("two short same string");
//		_print_result	("short1.compare(short1) == 0",
//						  short1.compare(short1) == 0);
//
//		print_test	("two long same string");
//		_print_result	("long1.compare(long1) == 0",
//						  long1.compare(long1) == 0);
//	}

//	{
//		print_test("same string");
//		{
//			fnx::WildcardString	lhs("abc"),
//								rhs("abc");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("< string without wildcard");
//		{
//			fnx::WildcardString lhs("abc"),
//								rhs("def");
//			_do_test(lhs, rhs, "<");
//			print_test("> string without wildcard");
//			_do_test(rhs, lhs, ">");
//		}
//		print_test("test wildcard * 1");
//		{
//			fnx::WildcardString	lhs("abcdefg*"),
//								rhs("abcdefghi");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard * 2");
//		{
//			fnx::WildcardString	lhs("abcdefgh");
//			fnx::WildcardString	rhs("abcdefg*");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard * 3");
//		{
//			fnx::WildcardString	lhs("abc*fghi");
//			fnx::WildcardString	rhs("abcdefghi");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard * 4");
//		{
//			fnx::WildcardString	lhs("*");
//			fnx::WildcardString	rhs("abcdefg*dnwi * da wdaw 8a*");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard * 5");
//		{
//			fnx::WildcardString	lhs("sd*dad*");
//			fnx::WildcardString	rhs("abcdefg*dnwi * da wdaw 8a*");
//			_do_test(lhs, rhs, ">");
//		}
//		print_test("test wildcard * 6");
//		{
//			fnx::WildcardString	lhs("abc********hi");
//			fnx::WildcardString	rhs("**bcdef***ghi");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard ? 1");
//		{
//			fnx::WildcardString lhs("ab?de?g"),
//								rhs("?bc?ef?");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard ? 2");
//		{
//			fnx::WildcardString lhs("ab?de?g"),
//								rhs("?bc?ef");
//			_do_test(lhs, rhs, ">");
//		}
//		print_test("test wildcard ? 3");
//		{
//			fnx::WildcardString lhs("ab?de?"),
//								rhs("?bc?ef?");
//			_do_test(lhs, rhs, ">");
//		}
//		print_test("test wildcard ? 4");
//		{
//			fnx::WildcardString lhs("ab?def?"),
//								rhs("?bc?e?");
//			_do_test(lhs, rhs, ">");
//		}
//		print_test("test wildcard ? 5");
//		{
//			fnx::WildcardString lhs("ab?de?g"),
//								rhs("?bc?ef?");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard ? 6");
//		{
//			fnx::WildcardString lhs("ab?de?g"),
//								rhs("?bc?e??");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard \\ 1");
//		{
//			fnx::WildcardString lhs("abc"),
//								rhs("ab\\?");
//			_do_test(lhs, rhs, ">");
//		}
//		print_test("test wildcard \\ 2");
//		{
//			fnx::WildcardString lhs("abc"),
//								rhs("ab\\c");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard \\ 3");
//		{
//			fnx::WildcardString lhs("ab?"),
//								rhs("ab\\c");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard \\ 4");
//		{
//			fnx::WildcardString lhs("ab\\d"),
//								rhs("ab?");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard \\ 5");
//		{
//			fnx::WildcardString lhs("ab?"),
//								rhs("ab;c");
//			_do_test(lhs, rhs, ">");
//		}
//		print_test("test wildcard \\ 6");
//		{
//			fnx::WildcardString lhs("ab?"),
//								rhs("ab\\c");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard \\ 7");
//		{
//			fnx::WildcardString lhs("abcd"),
//								rhs("ab\\c\\d");
//			_do_test(lhs, rhs, "==");
//		}
//		print_test("test wildcard * ");
//		{
//			fnx::WildcardString lhs("baaabab"),
//								rhs("*****ba*****ab");
//			_do_test(lhs, rhs, "==");
//		}
//	}
//	{
//		print_test("test find_first_of without wildcard");
//		{
//			fnx::WildcardString	lhs("fedcbabcdef"),
//								rhs("a");
//			_print_str(lhs, rhs);
//			size_t res = lhs.find_first_of(rhs);
//			_print_result	("lhs.find_first_of(rhs) == 5",
//							  res == 5);
//			std::cout	<< "res = "
//						<< res
//						<< std::endl;
//		}
//	}
}
#endif
