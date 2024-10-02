#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			double x = 2;
			double eps = 0.000001;
			int n = 0;
			double s = 0;
			double expected = 0.53731;

			Assert::AreEqual(s, expected, 0.01);
		}
	};
}
