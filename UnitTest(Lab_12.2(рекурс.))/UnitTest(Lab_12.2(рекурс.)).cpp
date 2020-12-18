#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.2(рекурс.)/Lab_12.2(рекурс.).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab122рекурс
{
	TEST_CLASS(UnitTestLab122рекурс)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Spusok* first = NULL;
			Spusok* last = NULL;
			Spusok* T;

			int index = 3, N = 5;
			Creata(first, last, index, N);

			T = first;
			COUT(T, 0, N, index);

			T = first;
			int x = 5;
			Process(T, x, 0);
			T = first;
			int l = T->inf;
			Assert::AreEqual(l, 8);
		}
	};
}
