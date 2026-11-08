#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2/lab8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "hello.    world";

			CapitalizeAfterDot(str);

			Assert::IsTrue(str == "hello.    World");
		}

		TEST_METHOD(PunctuationAfterDotTest)
		{
			string str = "hello. \"world\"";

			CapitalizeAfterDot(str);

			Assert::IsTrue(str == "hello. \"World\"");
		}
	};
}
