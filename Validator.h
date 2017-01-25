#pragma once

#include <string>

using std::string;

class Validator {
	public:
		static bool isAlphabetStr(const string& str);
		static bool isNumStr(const string& str);
		static bool isBinaryStr(const string& str);
};
