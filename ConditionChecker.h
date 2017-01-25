#pragma once

#include <string>

class ConditionChecker {
	public:
		const static int TRUE = 1;
		const static int FALSE = 0;
		const static int SKIP = -1;

		virtual int check(string str, size_t pos) = 0;
		virtual ~ConditionChecker() {}
};
