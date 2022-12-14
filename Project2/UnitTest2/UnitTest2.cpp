#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[100];
			CreateBIN(fname); 
			PrintBIN(fname);
			char gname[100];
			ProcessBIN1(fname, gname);
		}
	};
}
