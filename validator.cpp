#include "Validator.h"
#define CLASS Validator

bool CLASS::isAlphabetStr(string str) {
	for (auto c : str) {
		if (not std::isalpha(c)) {
			return false;
		}
	}
	return true;
}

bool CLASS::isNumStr(string str) {
	for (auto c : str) {
		if (not std::isdigit(c)) {
			return false;
		}
	}
	return true;
}

bool CLASS::isBinaryStr(string str) {
	for (auto c : str) {
		if (not (c == '0' or c == '1')) {
			return false;
		}
	}
	return true;
}
