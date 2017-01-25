#include "ConditionallySubStringFinder.h"
#define CLASS ConditionallySubStringFinder

#include <iostream>
#include "ConditionCheckerFactory.h"

/**
 * 開始位置の集合を部分文字列の集合に変換する
 *
 */
vector<string> CLASS::convertPosSetToSubStringSet(string str, vector<size_t> start_pos_set, size_t length) {
	vector<string> sub_str_set;
	for (auto pos : start_pos_set) {
		sub_str_set.push_back(str.substr(pos, length));
	}
	return sub_str_set;
}

/**
 * 条件付きの部分文字列のうち、最長のものを見つける
 *
 * @param string str 対象にする文字列
 * @param int type 条件のタイプ
 */
vector<string> CLASS::find(string str, int type) {
	ConditionChecker* checker = ConditionCheckerFactory::make(type);
	if (not checker->validate(str)) {
		*errlog << "type " << type << " : invalid string " << str << endl;
		// TODO exception
		exit(1);
	}
	vector<size_t> start_pos_set;
	size_t max_length = 0;
	size_t length = 1;
	size_t start_pos = 0;
	for (size_t pos = 0; pos < str.size(); pos++) {
		switch (checker->check(str, pos)) {
			case checker->TRUE:
				std::cout << "debug pos " << pos << std::endl; // debug
				length++;
				if (max_length == length) {
					start_pos_set.push_back(start_pos);
				} else if (max_length < length) {
					start_pos_set.clear();
					max_length = length;
					start_pos_set.push_back(start_pos);
				}
				break;
			case checker->FALSE:
				length = 1;
				start_pos = pos + 1;
				break;
			case checker->SKIP:
				break;
		}
	}
	std::cout << "debug ml " << max_length << std::endl; // debug
	delete checker;
	return convertPosSetToSubStringSet(str, start_pos_set, max_length);
}


