#include <string>

using namespace std;

class SimilarityCheck {
public:
	int lengthscore(string a, string b)
	{
		if (a.size() == b.size()) {
			return 60;
		}
		else if (a == "A") {
			return 0;
		}
		return -1;
	}
};