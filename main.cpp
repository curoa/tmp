#include <iostream>
#include <string>
#include <stdexcept>
#include "Global.h"
#include "ConditionallySubStringFinder.h"

using std::string;
using std::cout;
using std::endl;

const int ARGC_NORMAL = 2 + 1;
const int ARGC_EMPTY_STR = ARGC_NORMAL - 1;

int main(int argc, char** argv) {
	*debug << "debug argc " << argc << std::endl; // debug
	if (not (argc == ARGC_NORMAL or argc == ARGC_EMPTY_STR)) {
		*errlog
			<< "invalid argument" << endl
			<< "Usage : " << argv[0] << " challange_number input_string" << endl;
		return 1;
	}
	setting.challange_number = std::stoi(argv[1]);
	string str = "";
	if (argc == ARGC_NORMAL) {
		str = argv[2];
	}
	*debug << "debug " << setting.challange_number  << std::endl; // debug
	*debug << "debug str " << str << std::endl; // debug

	try {
		ConditionallySubStringFinder finder;
		auto sub_str_set = finder.find(str, setting.challange_number);
		for (auto str : sub_str_set) {
			std::cout << str << std::endl; // debug
		}
	} catch (std::exception& err) {
		*errlog << err.what() << endl;
	}

	*debug << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}
