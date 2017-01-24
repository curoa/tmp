#pragma once

#include <string>

using std::string;

class Validator {
	public:
		static bool isAlphabetStr(string str);
		static bool isNumStr(string str);
		static bool isBinaryStr(string str);
};
