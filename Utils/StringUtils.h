/*
 * StringUtils.h
 *
 *  Created on: 5 avr. 2017
 *      Author: hnnguyen
 */

#ifndef UTILS_STRINGUTILS_H_
#define UTILS_STRINGUTILS_H_

#include <stdio.h>
#include <iostream>
#include <string.h>

namespace Utils {

class StringUtils {
public:
	static bool startsWith(std::string& str, const std::string& prefix) {
		std::size_t found = str.find(prefix);
		if (found == 0)
			return true;
		return false;
	}

	static bool endsWith(std::string& str, const std::string& suffix) {
		std::size_t found = str.find(suffix);
		if (found == str.length() - suffix.length())
			return true;
		return false;
	}

	static std::string repeat(const std::string& str, int& times);

	/*
	 * Description: Checks if a string is empty ("").
	 */
	inline static bool isEmpty(const std::string &str) {
		return str.empty();
	}

	/*
	 * function: substringBeforeLast
	 * Description: Gets the substring before the last occurrence of a separator.
	 * Params: str, separator
	 */
	static std::string substringBeforeLast(std::string str,
			std::string separator) {
		std::size_t found = str.rfind(separator);
		if (found != std::string::npos) {
			return str.substr(0,found);
		} else {
			return str;
		}
	}

	/*
	 * Description: Gets the substring before the first occurrence of a separator.
	 */
	inline static std::string substringBefore(std::string str,
			std::string separator) {
		std::size_t found = str.find(separator);
		if (found != std::string::npos) {
			std::cout << "position\t" << found << std::endl;
			return str.substr(0, found);
		} else {
			return str;
		}
	}

	/*
	 * Description: Gets the substring after the first occurrence of a separator.
	 */
	inline static std::string substringAfter(std::string str,
			std::string separator) {
		std::cout << "string\t" << str << " \t separator\t" << separator << std::endl;
		std::size_t found = str.find_first_of(separator);
		if (found != std::string::npos) {
			return str.substr(found + 1, str.length() - found);
		} else {
			return str;
		}
	}

	static bool replace(std::string &str, const std::string &from,
			const std::string &to);
	static bool replaceLast(std::string &str, const std::string &from,
			const std::string &to);
	static bool startsWith(const std::string &str, const std::string &prefix);
	static bool endsWith(const std::string &str, const std::string &suffix);

//	template<typename T >
//	static std::string toString(T value);
//
//	template<typename T >
//	static T parse(const std::string &str);
//
//	template<typename T >
//	static T parse(const std::string &str, bool adavanced);

//	template<typename T >
//	static std::vector<T> parseArray(const std::string &str);
	static void toUpper(char *s);
	static void toUpper(std::string &str);
	static void toLower(char *s);
	static void toLower(std::string &str);
	static std::string & ltrim(std::string &s);
	static std::string & rtrim(std::string &s);
	static std::string & trim(std::string &s);

//	template<typename T >
//	static std::string join(const std::vector<T> &v, const std::string &token);

//	static std::vector<std::string> split(const std::string &str, char delim);

	inline static std::string strip(std::string str, char stripChar) {
		if (str == "") {
			return "";
		}
		const auto strBegin = str.find_first_not_of(stripChar);
		if (strBegin == std::string::npos)
			return str;
		const auto strEnd = str.find_last_not_of(stripChar);
		const auto strRange = strEnd - strBegin + 1;

		return str.substr(strBegin, strRange);
	}
};

} /* namespace Utils */

#endif /* UTILS_STRINGUTILS_H_ */
