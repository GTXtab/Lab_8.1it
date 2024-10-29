#include "pch.h"
#include "CppUnitTest.h"
#include <cstring>
#include <string> 
#include "../Lab_8.1it/Lab_8.1it.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char testStr1[] = "No matches here";
			Assert::AreEqual(0, Count(testStr1));

			char testStr2[] = "Only one match , -";
			Assert::AreEqual(1, Count(testStr2));
		}
	};
}
