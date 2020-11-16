#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1/Lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[22] = { 0,-1,-2,-3,-4,-5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,-20,-21 }, AmountIter = 0, SumIter = 0;

			ChangeIter(t, 21);

			Assert::AreEqual(AmountIter, 0);
			Assert::AreEqual(SumIter, 0);
			Assert::AreEqual(t[0], 0);
			Assert::AreEqual(t[21], -21);
		}
	};
}
