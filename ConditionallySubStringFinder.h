#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

/**
 * 条件付きの部分文字列のうち、最長のものを見つけるためのクラス
 *
 * 最長のものが複数あるときは複数の文字列を返す
 */
class ConditionallySubStringFinder {
	public:
		vector<string> find(string str, int type);
	private:
		vector<string> convertPosSetToSubStringSet(string str, vector<size_t> start_pos_set, size_t length);
};
