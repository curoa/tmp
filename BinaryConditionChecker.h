#pragma once

#include "ConditionChecker.h"
#include "Validator.h"

class BinaryConditionChecker : public ConditionChecker {
	public:
		int check(string str, size_t pos) {
			Validator::isBinaryStr(str);
			if (pos + 1 >= str.size()) {
				return SKIP;
			}
			if (str[pos] == str[pos + 1]) {
				return TRUE;
			}
			return FALSE;
		}
};
