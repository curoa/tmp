#include "Setting.h"
#include <iostream>

Setting setting;
std::ostream* errlog = &std::cerr;
//errlog = new ofstream("/dev/null");
std::ostream* debug = &std::cout;
