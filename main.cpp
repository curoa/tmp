#include <iostream>
#include <string>
#include "Global.h"
#include "ConditionallySubStringFinder.h"

// TODO comment
// TODO test
// TODO bun in type 2, 3

using std::string;
using std::cout;
using std::endl;

const int ARGC_NORMAL = 2 + 1;
const int ARGC_EMPTY_STR = ARGC_NORMAL - 1;

int main(int argc, char** argv) {
	std::cout << "debug argc " << argc << std::endl; // debug
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

	ConditionallySubStringFinder finder;
	auto vec = finder.find(str, setting.challange_number);
	for (auto val : vec) {
		std::cout << "debug ans " << val << std::endl; // debug
	}

	std::cout << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}
