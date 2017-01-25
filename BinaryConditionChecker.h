#pragma once

#include "ConditionChecker.h"
#include "Validator.h"

/**
 * 0,1 からなる数字の文字列に対して、次の文字が同じ数字か調べるためのクラス
 *
 */
class BinaryConditionChecker : public ConditionChecker {

	public:

		/**
		 * 条件に合うかどうかを返す
		 *
		 * @param string str 調べる文字列
		 * @param string pos 調べる位置
		 * @return int クラス定数のいずれかを返す
		 */
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
