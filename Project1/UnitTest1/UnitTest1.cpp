#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char fname[100];
			CreateTXT(fname);
			PrintTXT(fname);
			ProcessTXT1(fname);
			ProcessTXT2(fname);
		}
	};
}
