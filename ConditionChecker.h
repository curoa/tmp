#pragma once

#include <string>

/**
 * 条件を決めるための抽象クラス
 *
 */
class ConditionChecker {
	public:
		const static int TRUE = 1;
		const static int FALSE = 0;
		const static int SKIP = -1;

		/**
		 * 条件に合うかどうかを返す
		 *
		 * @param string str 調べる文字列
		 * @param string pos 調べる位置
		 * @return int クラス定数のいずれかを返す
		 */
		virtual int check(string str, size_t pos) = 0;

		/**
		 * 入力文字列が正しいか調べる
		 *
		 * @param string str 調べる文字列
		 * @return bool 入力文字列が正しいときに true, そうでないとき false
		 */
		virtual bool validate(string str) = 0;

		/**
		 * 抽象デストラクタ
		 *
		 */
		virtual ~ConditionChecker() {}

};
