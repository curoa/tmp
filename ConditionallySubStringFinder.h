#include <string>
#include <vector>

using std::string;
using std::vector;

class ConditionallySubStringFinder {
	public:
		// TODO change void to hoge
		vector<string> find(string str, int type);
	private:
		vector<string> convertPosSetToSubStringSet(string str, vector<size_t> start_pos_set, size_t length);
};
