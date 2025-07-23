#include <iostream>
#include "gmock/gmock.h"
#include "SimilarityCheck.cpp"


TEST(LCTS, CheckStrSameLength)
{
	SimilarityCheck SC;
	int actual = SC.lengthscore("ABC", "ABC");
	EXPECT_EQ(actual, 60);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}