#pragma once

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

struct Setting {
	public:
		int challange_number;

		/**
		 * 設定が正しいかどうかを返す
		 *
		 * @return bool 設定が正しいとき true, そうでないとき false を返す
		 */
		bool check() const {
			bool flg = true;
			if (not checkChallangeNumber()) {
				flg = false;
			}
			return flg;
		}

	private:

		/**
		 * challange_number が正しいかを返す
		 *
		 * @return bool challange_number が正しいとき true, そうでないとき false を返す
		 */
		bool checkChallangeNumber() const {
			std::vector<int> valid_set = {1, 2, 3};
			bool flg = false;
			for (auto val : valid_set) {
				if (challange_number == val) {
					flg = true;
				}
			}
			if (flg == false) {
				cout << "invalid challange_number : " << challange_number << endl;
			}
			return flg;
		}
};
