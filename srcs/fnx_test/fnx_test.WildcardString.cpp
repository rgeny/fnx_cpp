/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnx_test.WildcardString.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:34:59 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/08 18:59:00 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnx_test.hpp"

#ifdef FNX_TEST

template
<
	class T1,
	class T2
>
static void	_print_str	(T1 str1,
						 T2 str2)
{
	std::cout	<< "str1 = "
				<< str1
				<< std::endl
				<< "str2 = "
				<< str2
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
						 UNUSED T2 rhs)
{
	_print_str(lhs, rhs);
	_print_result("operator ==", lhs == rhs);
	return ;
	_print_result("operator !=", lhs != rhs);
	_print_result("operator <", lhs < rhs);
	_print_result("operator <=", lhs <= rhs);
	_print_result("operator >", lhs > rhs);
	_print_result("operator >=", lhs >= rhs);
//	_print_result("compare (const WildcardString & str) const : ");
//	_print_result("compare (size_t pos, size_t len, WildcardString const & str) const : ");
//	_print_result("compare (size_t pos, size_t len, WildcardString const & str, size_te subpos, size_t sublen) const : ");
//	_print_result("compare (char const * s) const : ");
//	_print_result("compare (size_t posm size_t len, char const * s) const : ");
//	_print_result("compare (size_t pos, size_t len, char const *s, size_t n) const : ");
//	_print_result("find (const WildcardString & str, size_t pos = 0) const : ");
//	_print_result("find (const char * s, size_t pos = 0) const : ");
//	_print_result("find (const char * s, size_t pos, size_t n) const : ");
//	_print_result("find (char c, size_t pos = 0) const : ");
//	_print_result("rfind (const WildcardString & str, size_t pos = npos) const : ");
//	_print_result("rfind (const char * s, size_t pos = npos) const : ");
//	_print_result("rfind (const char * s, size_t pos, size_t n) const : ");
//	_print_result("rfind (char c, size_t pos = npos) const : ");
//	_print_result("find_first_of (const WildcardString & str, size_t pos = 0) const : ");
//	_print_result("find_first_of (const char * s, size_t pos = 0) const : ");
//	_print_result("find_first_of (const char * s, size_t pos, size_t n) const : ");
//	_print_result("find_first_of (char c, size_t pos = 0) const : ");
//	_print_result("find_last_of (const WildcardString & str, size_t pos = npos) const : ");
//	_print_result("find_last_of (const char * s, size_t pos = npos) const : ");
//	_print_result("find_last_of (const char * s, size_t pos, size_t n) const : ");
//	_print_result("find_last_of (char c, size_t pos = npos) const : ");
//	_print_result("find_first_not_of (const WildcardString & str, size_t pos = 0) const : ");
//	_print_result("find_first_not_of (const char * s, size_t pos = 0) const : ");
//	_print_result("find_first_not_of (const char * s, size_t pos, size_t n) const : ");
//	_print_result("find_first_not_of (char c, size_t pos = 0) const : ");
//	_print_result("find_last_not_of (const WildcardString & str, size_t pos = npos) const : ");
//	_print_result("find_last_not_of (const char * s, size_t pos = npos) const : ");
//	_print_result("find_last_not_of (const char * s, size_t pos, size_t n) const : ");
//	_print_result("find_last_not_of (char c, size_t pos = npos) const : ");
}

void	fnx_test::WildcardString	(void)
{
//	std::string	s1("abcdef"),
//				s2("abcdefghi");
//	
//	std::cout	<< "res = "
//				<< s2.find(s1.substr(3, s1.size()), 0)
//				<< std::endl;
//	return ;
	print_category("WildcardString (compare WildcardString with WildcardString)");
	{
		print_test("same string");
		{
			fnx::WildcardString	str1("abc");
			fnx::WildcardString	str2("abc");
			_do_test(str1, str2);
		}
		print_test("diff string without wildcard");
		{
			fnx::WildcardString str1("abc");
			fnx::WildcardString	str2("def");
			_do_test(str1, str2);
		}
		print_test("test wildcard * 1");
		{
			fnx::WildcardString	str1("abcdefg*");
			fnx::WildcardString	str2("abcdefghi");
			_do_test(str1, str2);
		}
		print_test("test wildcard * 2");
		{
			fnx::WildcardString	str1("abcdefgh");
			fnx::WildcardString	str2("abcdefg*");
			_do_test(str1, str2);
		}
		print_test("test wildcard * 3");
		{
			fnx::WildcardString	str1("abc*fghi");
			fnx::WildcardString	str2("abcdefghi");
			_do_test(str1, str2);
		}
		print_test("test wildcard * 4");
		{
			fnx::WildcardString	str1("*");
			fnx::WildcardString	str2("abcdefg*dnwi * da wdaw 8a*");
			_do_test(str1, str2);
		}
		print_test("test wildcard * 5");
		{
			fnx::WildcardString	str1("sd*dad*");
			fnx::WildcardString	str2("abcdefg*dnwi * da wdaw 8a*");
			_do_test(str1, str2);
		}
		print_test("test wildcard * 6");
		{
			fnx::WildcardString	str1("abc********hi");
			fnx::WildcardString	str2("**bcdef***ghi");
			_do_test(str1, str2);
		}
		print_test("test wildcard ? 1");
		{
			fnx::WildcardString str1("ab?de?g"),
								str2("?bc?ef?");
			_do_test(str1, str2);
		}
		print_test("test wildcard ? 2");
		{
			fnx::WildcardString str1("ab?de?g"),
								str2("?bc?ef");
			_do_test(str1, str2);
		}
		print_test("test wildcard ? 3");
		{
			fnx::WildcardString str1("ab?de?"),
								str2("?bc?ef?");
			_do_test(str1, str2);
		}
		print_test("test wildcard ? 4");
		{
			fnx::WildcardString str1("ab?de?g"),
								str2(":bc:ef:", '*', ':');
			_do_test(str1, str2);
		}
		print_test("test wildcard ? 4");
		{
			fnx::WildcardString str1("ab?de?g"),
								str2(":bc:e::", '*', ':');
			_do_test(str1, str2);
		}
		print_test("test wildcard \\ 1");
		{
			fnx::WildcardString str1("abc"),
								str2("ab\\?");
			_do_test(str1, str2);
		}
		print_test("test wildcard \\ 2");
		{
			fnx::WildcardString str1("abc"),
								str2("ab\\c");
			_do_test(str1, str2);
		}
		print_test("test wildcard \\ 3");
		{
			fnx::WildcardString str1("ab?"),
								str2("ab\\c");
			_do_test(str1, str2);
		}
		print_test("test wildcard \\ 4");
		{
			fnx::WildcardString str1("ab\\d"),
								str2("ab?");
			_do_test(str1, str2);
		}
		print_test("test wildcard \\ 5");
		{
			fnx::WildcardString str1("ab?"),
								str2("ab;c", '.', ':', ';');
			_do_test(str1, str2);
		}
		print_test("test wildcard \\ 6");
		{
			fnx::WildcardString str1("ab?"),
								str2("ab\\c", '.', ':', ';');
			_do_test(str1, str2);
		}
	}
	print_category("WildcardString (compare WildcardString with char const *)");
	{
		
	}
	print_category("WildcardString (compare char const * with WildcardString)");
	{
		
	}
	print_category("WildcardString (compare WildcardString with std::string)");
	{
		
	}
	print_category("WildcardString (compare std::string with WildcardString)");
	{
		
	}
	print_category("WildcardString (compare WildcardString with NotCaseString)");
	{
		
	}
	print_category("WildcardString (compare NotCaseString with WildcardString)");
	{
		
	}
}
#endif
