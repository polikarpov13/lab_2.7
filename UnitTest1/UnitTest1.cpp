#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/2/lab_2.7/lab_2.7/Payment.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment z;

			z.Init(4000, 100, 5, 4000, 0);

			Assert::AreEqual(4200.0, z.іnterestt());
		}
	};
}
