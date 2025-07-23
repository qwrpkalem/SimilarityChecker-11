#include <string>

using namespace std;

class SimilarityCheck {
public:
	int lengthscore(string str1, string str2)
	{
		return GetLengthScore(str1.size(), str2.size());
	}

private:
	const int MAX_LENGTH_SCORE = 60;
	const int DOUBLE = 2;

	int GetLengthScore(int length_str1, int length_str2)
	{
		int Gap = GetStrLengthGap(length_str1, length_str2);

		if (IsSameLength(length_str1, length_str2)) return MAX_LENGTH_SCORE;
		if (IsLengthMorethanDouble(length_str1, length_str2)) return 0;

		if (length_str1 > length_str2) {
			return (60 - (Gap * 60 / length_str2));
		}

		return (60 - (Gap * 60 / length_str1));
	}

	int GetStrLengthGap(int length_str1, int length_str2)
	{
		if (length_str1 >= length_str2) {
			return length_str1 - length_str2;
		}

		return length_str2 - length_str1;
	}

	bool IsSameLength(int length_str1, int length_str2)
	{
		return length_str1 == length_str2;
	}

	bool IsLengthMorethanDouble(int length_str1, int length_str2)
	{
		return length_str1 >= DOUBLE * length_str2 || length_str2 >= DOUBLE * length_str1;
	}
};