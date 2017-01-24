#include "ConditionallySubStringFinder.h"
#define CLASS ConditionallySubStringFinder

#include <iostream>

bool check(char a, char b) {
	if (a < b) {
		return true;
	} else {
		return false;
	}
}

vector<string> CLASS::convertPosSetToSubStringSet(string str, vector<size_t> start_pos_set, size_t length) {
	vector<string> sub_str_set;
	for (auto pos : start_pos_set) {
		sub_str_set.push_back(str.substr(pos, length));
	}
	return sub_str_set;
}

vector<string> CLASS::find(string str, int /* type */) {
	// TODO use type
	vector<size_t> start_pos_set;
	size_t max_length = 0;
	size_t length = 1;
	size_t start_pos = 0;
	for (size_t pos = 0; pos < str.size(); pos++) {
		if (not (pos < str.size() - 1)) {
			break;
		}
		if (check(str[pos], str[pos + 1])) {
			std::cout << "debug pos " << pos << std::endl; // debug
			length++;
			if (max_length == length) {
				start_pos_set.push_back(start_pos);
			} else if (max_length < length) {
				start_pos_set.clear();
				max_length = length;
				start_pos_set.push_back(start_pos);
			}
		} else {
			length = 1;
			start_pos = pos + 1;
		}
	}
	std::cout << "debug ml " << max_length << std::endl; // debug
	return convertPosSetToSubStringSet(str, start_pos_set, max_length);
}

