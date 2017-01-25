#pragma once

#include <cassert>
#include "ConditionChecker.h"
#include "Validator.h"

/**
 * 次の数字が増加しているか調べるためのクラス
 *
 */
class NumConditionChecker : public ConditionChecker {

	public:

		/**
		 * 条件に合うかどうかを返す
		 *
		 * @param string str 調べる文字列
		 * @param string pos 調べる位置
		 * @return int クラス定数のいずれかを返す
		 */
		int check(string str, size_t pos) {
			assert(validate(str));
			if (pos + 1 >= str.size()) {
				return SKIP;
			}
			if (str[pos] < str[pos + 1]) {
				return TRUE;
			}
			return FALSE;
		}

		bool validate(string str) {
			return Validator::isNumStr(str);
		}
};
