#include <iostream>
#include "gmock/gmock.h"
#include "SimilarityCheck.cpp"

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}