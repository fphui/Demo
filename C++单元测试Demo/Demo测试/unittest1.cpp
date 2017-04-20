#include "stdafx.h"
#include "CppUnitTest.h"
#include "Demo.h"
#include<vector>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace Demo≤‚ ‘
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(First)
		{
			
			Demo demo;
			vector<int> num;
			for (int i = 0;i < 10;i++) {
				num.push_back(i);
			}
			Assert::AreEqual(8, demo.rotate(num, -8));
		}
		TEST_METHOD(Second)
		{
			Demo demo;
			vector<int> num;
			for (int i = 0;i < 10;i++) {
				num.push_back(i);
			}
			Assert::AreEqual(7, demo.rotate(num, 3));
		}
		TEST_METHOD(Third)
		{
			Demo demo;
			vector<int> num;
			for (int i = 0;i < 10;i++) {
				num.push_back(i);
			}
			Assert::AreEqual(8, demo.rotate(num, 12));
		}
		TEST_METHOD(Four)
		{
			Demo demo;
			vector<int> num;
			Assert::AreEqual(-1, demo.rotate(num, 12));
		}
	};
}