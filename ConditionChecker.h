#pragma once

#include <string>

class ConditionChecker {
	public:
		virtual bool check(string str, size_t pos) = 0;
		virtual ~ConditionChecker() {}
};
