#include <iostream>
#include <string>
#include "Global.h"

using std::string;
using std::cout;
using std::endl;
using namespace Global;

int main(int argc, char** argv) {
	//ostream* errlog = new ofstream("/dev/null");
	if (argc != 2 + 1) {
		*errlog
			<< "invalid argument" << endl
			<< "Usage : " << argv[0] << " challange_number input_string" << endl;
	}
	setting.challange_number = std::stoi(argv[1]);
	cout << setting.challange_number << endl;


	std::cout << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}
