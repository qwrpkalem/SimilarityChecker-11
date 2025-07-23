#include <iostream>
#include "gmock/gmock.h"
#include "SimilarityCheck.cpp"


class LengthCheckFixture : public testing::Test
{
public:
	SimilarityCheck SC;

	void checklengthscore(int expected, string a, string b) {
		int actual = SC.lengthscore(a, b);
		EXPECT_EQ(expected, actual);
	}
};

TEST_F(LengthCheckFixture, CheckStrSameLength)
{
	checklengthscore(60, "AAA", "AAA");
}

TEST_F(LengthCheckFixture, CheckStrSameLengthDiffAlphabat)
{
	checklengthscore(60, "ASD", "DSA");
}

TEST_F(LengthCheckFixture, CheckStrDiffMorethanDouble)
{
	checklengthscore(0, "A", "BB");
}

TEST_F(LengthCheckFixture, CheckStrPartScoreCase)
{
	checklengthscore(20, "AAABB", "BAA");
	checklengthscore(30, "AA", "AAE");
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}