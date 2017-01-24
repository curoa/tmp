#pragma once

#include "ConditionChecker.h"
#include "Validator.h"

class BinaryConditionChecker : public ConditionChecker {
	public:
		bool check(string str, size_t pos) {
			Validator::isBinaryStr(str);
			if (pos + 1 >= str.size()) {
				return true;
			}
			if (str[pos] == str[pos + 1]) {
				return true;
			}
			return false;
		}
};