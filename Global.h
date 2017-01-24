/**
 * グローバル変数をまとめる
 *
 */

#include "Setting.h"
#include <iostream>

namespace Global {
	Setting setting;
	std::ostream* errlog = &std::cerr;
	std::ostream* debug = &std::cout;
}
