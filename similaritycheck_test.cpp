#include <iostream>
#include "gmock/gmock.h"
#include "SimilarityCheck.cpp"


class LengthCheckFixture : public testing::Test
{
public:
	SimilarityCheck SC;

	void checklength(int expected, string a, string b) {
		int actual = SC.lengthscore(a, b);
		EXPECT_EQ(expected, actual);
	}
};

TEST_F(LengthCheckFixture, CheckStrSameLength)
{
	checklength(60, "AAA", "AAA");
}

TEST_F(LengthCheckFixture, CheckStrSameLengthDiffAlphabat)
{
	checklength(60, "ASD", "DSA");
}

TEST_F(LengthCheckFixture, CheckStrDiffMorethanDouble)
{
	checklength(0, "A", "BB");
}

TEST_F(LengthCheckFixture, CheckStrPartScoreCase)
{
	checklength(20, "AAABB", "BAA");
	checklength(30, "AA", "AAE");
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}