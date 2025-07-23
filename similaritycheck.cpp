#include <string>

using namespace std;

class SimilarityCheck {
public:
	int lengthscore(string str1, string str2)
	{
		int score = 0;

		int Gap = GetStrLengthGap(str1.size(), str2.size(), Gap);
		
		score = GetLengthScore(Gap, str1.size(), str2.size());

		return score;
	}
	int GetLengthScore(int Gap, int length_str1, int length_str2)
	{

		if (IsSameLength(length_str1, length_str2)) return 60;
		if (IsLengthMorethanDouble(length_str1, length_str2)) return 0;

		if (length_str1 > length_str2) {
			return (60 - (Gap * 60 / length_str2));
		}

		return (60 - (Gap * 60 / length_str1));
	}

	int GetStrLengthGap(int length_str1, int length_str2, int& Gap)
	{
		int gap = 0;
		if (length_str1 >= length_str2) {
			gap = length_str1 - length_str2;
		}
		else
		{
			gap = length_str2 - length_str1;
		}
		return gap;
	}

private:
	bool IsSameLength(int length_str1, int length_str2)
	{
		return length_str1 == length_str2;
	}
	bool IsLengthMorethanDouble(int length_str1, int length_str2)
	{
		return length_str1 >= 2 * length_str2 || length_str2 >= 2 * length_str1;
	}
};