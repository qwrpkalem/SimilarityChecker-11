#include <iostream>
#include "gmock/gmock.h"
#include "SimilarityCheck.cpp"


class LengthCheckFixture : public testing::Test
{
public:
	SimilarityCheck SC;

	void checklength(int expected, string a, string b) {
		int actual = SC.lengthscore("ABC", "ABC");
		EXPECT_EQ(expected, actual);
	}
};

TEST_F(LengthCheckFixture, CheckStrSameLength)
{
	checklength(60, "ABC", "ABC");
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}