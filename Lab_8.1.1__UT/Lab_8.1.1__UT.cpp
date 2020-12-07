#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab811UT
{
	TEST_CLASS(Lab811UT)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[] = { 'z', 'q', 'q', 'q', 'q' };

			bool functionResult = IsOrNot(str);

			Assert::AreEqual(true, functionResult);
		}
	};
}
