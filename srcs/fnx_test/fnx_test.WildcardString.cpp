/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.WildcardString.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:34:59 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/12 12:42:22 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST

template
<
	class T1,
	class T2
>
static void	_print_str	(T1 lhs,
						 T2 rhs)
{
	std::cout	<< BRIGHT UNDERSCORE "lhs =" RESET " "
				<< lhs
				<< std::endl
				<< BRIGHT UNDERSCORE "rhs =" RESET " "
				<< rhs
				<< std::endl;
}

static void	_print_result	(std::string msg,
							 bool result)
{
	if (result == true)
		std::cout	<< GREEN_TEXT;
	else
		std::cout	<< RED_TEXT;
	std::cout	<< msg
				<< RESET
				<< std::endl;
}

template
<
	class T1,
	class T2
>
static void	_do_test	(UNUSED T1 lhs,
						 UNUSED T2 rhs,
						 std::string type)
{
	bool	equal		= (type == "=="),
			inf			= (type == "<" ),
			sup			= (type == ">" );
	size_t	size_min	= std::min(lhs.size(), rhs.size()),
			size_max	= std::max(lhs.size(), rhs.size());

	if (equal || inf || sup)
	{
		_print_str(lhs, rhs);
		_print_result	("(lhs == rhs) == equal",
						  (lhs == rhs) == equal);
		_print_result	("(lhs != rhs) != equal",
						  (lhs != rhs) != equal);
		_print_result	("(lhs < rhs) == inf",
						  (lhs < rhs) == inf);
		_print_result	("(lhs <= rhs) == (inf || equal)",
						  (lhs <= rhs) == (inf || equal));
		_print_result	("(lhs > rhs) == sup",
						  (lhs > rhs) == (sup));
		_print_result	("(lhs >= rhs) == (sup || equal)",
						  (lhs >= rhs) == (sup || equal));
	}
	if  (equal == true)
	{
//	int	compare	(WildcardString const & str) const
		_print_result	("lhs.compare(rhs) == 0",
						  lhs.compare(rhs) == 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str) const;
		_print_result	("lhs.compare(0, lhs.size(), rhs) == 0",
						  lhs.compare(0, lhs.size(), rhs) == 0 );
		_print_result	("lhs.compare(lhs.size(), 0, rhs) == 0",
						  lhs.compare(0, lhs.size(), rhs) == 0 );
//	int	compare	(size_t pos,
//				 size_t len,
//				 WildcardString const & str,
//				 size_t subpos,
//				 size_t sublen) const;
		_print_result	("lhs.compare(0, lhs.size(), rhs, 0, rhs.size()) == 0",
						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
		_print_result	("lhs.compare(lhs.size(), 0, rhs, 0, rhs.size()) == 0",
						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
		_print_result	("lhs.compare(lhs.size(), 0, rhs, rhs.size(), 0) == 0",
						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
		_print_result	("lhs.compare(0, lhs.size(), rhs, rhs.size(), 0) == 0",
						  lhs.compare (0, lhs.size(), rhs, 0, rhs.size()) == 0);
//	int	compare (char const * s) const;
		_print_result	("lhs.compare(rhs.c_str()) == 0",
						 lhs.compare(rhs.c_str()) == 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s) const;
		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str()) == 0",
						  lhs.compare(0, lhs.size(), rhs.c_str()) == 0);
		_print_result	("lhs.compare(lhs.size() / 2, lhs.size()) == 0",
						  lhs.compare(0, lhs.size(), rhs.c_str()) == 0);
		_print_result	("lhs.compare(0, lhs.size() / 2, rhs.c_str()) == 0",
						  lhs.compare(0, lhs.size(), rhs.c_str()) == 0);
//	int	compare (size_t pos,
//				 size_t len,
//				 char const * s,
//				 size_t	n) const;
		_print_result	("lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) == 0",
						  lhs.compare(0, lhs.size(), rhs.c_str(), rhs.size()) == 0);
		_print_result	("lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) == 0",
						  lhs.compare(lhs.size() / 2, lhs.size(), rhs.c_str(), rhs.size()) == 0);
//	size_t	find	(WildcardString const & str,
//					 size_t pos = 0) const;
		_print_result	("lhs.find(rhs) == 0",
					 	 lhs.find(rhs) == 0);
//	size_t	find	(char const * s,
//					 size_t pos = 0) const;
		_print_result	("lhs.find(rhs.c_str(), 0) == 0",
						  lhs.find(rhs.c_str(), 0) == 0);
//	size_t	find	(char const * s,
//					 size_t pos,
//					 size_t n) const;
		_print_result	("lhs.find(rhs.c_str(), 0, size_max) == 0",
					 	  lhs.find(rhs.c_str(), 0, size_max) == 0);
//	size_t	find	(char c,
//					 size_t pos = 0) const;
		_print_result	("lhs.find(rhs[0], 0) == 0",
					 	  lhs.find(rhs[0], 0) == 0);
//	size_t	rfind	(WildcardString const & str,
//					 size_t pos = npos) const;
		_print_result	("lhs.rfind(rhs, size_min) == size_min)",
						  lhs.rfind(rhs, size_min) == size_min);
//	size_t	rfind	(char const * s,
//					 size_t pos,
//					 size_t n) const;
		_print_result	("lhs.rfind(rhs.c_str(), size_min, size_max) == size_min",
						  lhs.rfind(rhs.c_str(), size_min, size_max) == size_min);
//	size_t	rfind	(char const * s,
//					 size_t pos = npos) const;
		_print_result	("lhs.rfind(rhs.c_str(), size_min) == size_min",
						  lhs.rfind(rhs.c_str(), size_min) == size_min);
//	size_t	rfind	(char c,
//					 size_t pos = npos) const;
		_print_result	("lhs.rfind(rhs[0], 0) == 0",
						  lhs.rfind(rhs[0], 0) == 0);
//	size_t	find_first_of	(WildcardString const & str,
//							 size_t pos = 0) const;
		_print_result	("lhs.find_first_of(rhs) == 0",
						  lhs.find_first_of(rhs) == 0);
//		_print_result	("lhs.find_first_of(const char * s, size_t pos = 0) const");
//		_print_result	("lhs.find_first_of(const char * s, size_t pos, size_t n) const");
//		_print_result	("lhs.find_first_of(char c, size_t pos = 0) const");
//		_print_result	("lhs.find_last_of(rhs, size_t pos = npos) const");
//		_print_result	("lhs.find_last_of(const char * s, size_t pos = npos) const");
//		_print_result	("lhs.find_last_of(const char * s, size_t pos, size_t n) const");
//		_print_result	("lhs.find_last_of(char c, size_t pos = npos) const");
//		_print_result	("lhs.find_first_not_of(rhs, size_t pos = 0) const");
//		_print_result	("lhs.find_first_not_of(const char * s, size_t pos = 0) const");
//		_print_result	("lhs.find_first_not_of(const char * s, size_t pos, size_t n) const");
//		_print_result	("lhs.find_first_not_of(char c, size_t pos = 0) const");
//		_print_result	("lhs.find_last_not_of(rhs, size_t pos = npos) const");
//		_print_result	("lhs.find_last_not_of(const char * s, size_t pos = npos) const");
//		_print_result	("lhs.find_last_not_of(const char * s, size_t pos, size_t n) const");
//		_print_result	("lhs.find_last_not_of(char c, size_t pos = npos) const");
	}
	else if (inf == true)
	{
		_print_result("lhs.compare(rhs) const : ", lhs.compare(rhs) < 0);
	}
	else if (sup == true)
	{
		_print_result("lhs.compare(rhs) const : ", lhs.compare(rhs) > 0);
	}
}

void	fnx_test::WildcardString	(void)
{
	print_category("WildcardString (compare WildcardString with WildcardString)");
	{
		print_test("same string");
		{
			fnx::WildcardString	lhs("abc"),
								rhs("abc");
			_do_test(lhs, rhs, "==");
		}
		print_test("< string without wildcard");
		{
			fnx::WildcardString lhs("abc"),
								rhs("def");
			_do_test(lhs, rhs, "<");
			print_test("> string without wildcard");
			_do_test(rhs, lhs, ">");
		}
		print_test("test wildcard * 1");
		{
			fnx::WildcardString	lhs("abcdefg*"),
								rhs("abcdefghi");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard * 2");
		{
			fnx::WildcardString	lhs("abcdefgh");
			fnx::WildcardString	rhs("abcdefg*");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard * 3");
		{
			fnx::WildcardString	lhs("abc*fghi");
			fnx::WildcardString	rhs("abcdefghi");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard * 4");
		{
			fnx::WildcardString	lhs("*");
			fnx::WildcardString	rhs("abcdefg*dnwi * da wdaw 8a*");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard * 5");
		{
			fnx::WildcardString	lhs("sd*dad*");
			fnx::WildcardString	rhs("abcdefg*dnwi * da wdaw 8a*");
			_do_test(lhs, rhs, ">");
		}
		print_test("test wildcard * 6");
		{
			fnx::WildcardString	lhs("abc********hi");
			fnx::WildcardString	rhs("**bcdef***ghi");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard ? 1");
		{
			fnx::WildcardString lhs("ab?de?g"),
								rhs("?bc?ef?");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard ? 2");
		{
			fnx::WildcardString lhs("ab?de?g"),
								rhs("?bc?ef");
			_do_test(lhs, rhs, ">");
		}
		print_test("test wildcard ? 3");
		{
			fnx::WildcardString lhs("ab?de?"),
								rhs("?bc?ef?");
			_do_test(lhs, rhs, ">");
		}
		print_test("test wildcard ? 4");
		{
			fnx::WildcardString lhs("ab?def?"),
								rhs("?bc?e?");
			_do_test(lhs, rhs, ">");
		}
		print_test("test wildcard ? 5");
		{
			fnx::WildcardString lhs("ab?de?g"),
								rhs("?bc?ef?");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard ? 6");
		{
			fnx::WildcardString lhs("ab?de?g"),
								rhs("?bc?e??");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard \\ 1");
		{
			fnx::WildcardString lhs("abc"),
								rhs("ab\\?");
			_do_test(lhs, rhs, ">");
		}
		print_test("test wildcard \\ 2");
		{
			fnx::WildcardString lhs("abc"),
								rhs("ab\\c");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard \\ 3");
		{
			fnx::WildcardString lhs("ab?"),
								rhs("ab\\c");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard \\ 4");
		{
			fnx::WildcardString lhs("ab\\d"),
								rhs("ab?");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard \\ 5");
		{
			fnx::WildcardString lhs("ab?"),
								rhs("ab;c");
			_do_test(lhs, rhs, ">");
		}
		print_test("test wildcard \\ 6");
		{
			fnx::WildcardString lhs("ab?"),
								rhs("ab\\c");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard \\ 7");
		{
			fnx::WildcardString lhs("abcd"),
								rhs("ab\\c\\d");
			_do_test(lhs, rhs, "==");
		}
		print_test("test wildcard * ");
		{
			fnx::WildcardString lhs("baaabab"),
								rhs("*****ba*****ab");
			_do_test(lhs, rhs, "==");
		}
	}
}
#endif
