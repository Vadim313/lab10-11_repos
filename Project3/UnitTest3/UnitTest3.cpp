#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3/Project3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[100];
			CreateTXT(fname);
			PrintTXT(fname);
		}
	};
}
