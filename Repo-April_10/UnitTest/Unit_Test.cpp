#include "pch.h"
#include "CppUnitTest.h"
#include "..\Repo_Attend_April_10\Repo_Attend_April_10.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto val = sampleTest(5);
			Assert::AreEqual(6, val);
		}
	};
}
