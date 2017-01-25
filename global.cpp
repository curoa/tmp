#include "Setting.h"
#include <iostream>
#include <fstream>

Setting setting;
std::ostream* errlog = &std::cerr;
//std::ostream* errlog = new std::ofstream("/dev/null");
//std::ostream* debug = &std::cout;
std::ostream* debug = new std::ofstream("/dev/null");
