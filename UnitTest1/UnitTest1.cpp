#include "pch.h"
#include "CppUnitTest.h"
#include "../3.4/Set.h"
#include "../3.4/Set.cpp"
#include "../3.4/Array.h"
#include "../3.4/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Set a;
			a = a + 'A';
			Assert::AreEqual(a.kilkist(), 1);
		}
	};
}
