#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.1.IT/PR8.1.IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[]{ "I don't know what I know" };
			bool test = findOut(str);
			Assert::AreEqual(test, true);
		}
	};
}
