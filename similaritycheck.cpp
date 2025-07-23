#include <string>

using namespace std;

class SimilarityCheck {
public:
	int lengthscore(string a, string b)
	{
		if (a.size() == b.size()) {
			return 60;
		}
		else if (a.size() >= 2 * b.size()) {
			return 0;
		}
		else if (2 * a.size() <= b.size()) {
			return 0;
		}
		else if (a.size() > b.size()) {
			return 20;

		}
		else if (b.size() > a.size()) {
			return 40;
		}

		return -1;
	}
};