#include "Setting.h"
#include <iostream>

/**
 * グローバル変数をまとめる
 *
 */
namespace Global {
	Setting setting;
	std::ostream* errlog = &std::cerr;
	//ostream* errlog = new ofstream("/dev/null");
	std::ostream* debug = &std::cout;
}
