#pragma once

#include "Global.h"
#include "NumConditionChecker.h"
#include "BinaryConditionChecker.h"
#include "AlphabetConditionChecker.h"

/**
 * ConditionChecker を継承するクラスのインスタンスを返すクラス
 *
 */
class ConditionCheckerFactory {
	public:

		static const int NUM = 1;
		static const int BINARY = 2;
		static const int ALPHABET = 3;

		/**
		 * ConditionChecker を継承するクラスのインスタンスを返す
		 *
		 * @param int type どのクラスのインスタンスを返すかしていする。
		 * @return ConditionChecker* ConditionChecker を継承するクラスのポインタ
		 */
		static ConditionChecker* make(int type) {
			switch (type) {
				case NUM:
					return (ConditionChecker*) new NumConditionChecker;
				case BINARY:
					return (ConditionChecker*) new BinaryConditionChecker;
				case ALPHABET:
					return (ConditionChecker*) new AlphabetConditionChecker;
				default:
					*errlog << "invalid cheker type : " << type << endl;
					exit(1);
			}
		}	
};
