#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB5.2.2/lab5.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLAB522
{
	TEST_CLASS(UnitTestLAB522)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double S(const double x, const double eps, int& n, double s);
			double eps = 0.000001;
			int n = 0;
			double s = 0;

			//перевірка для x = 0.5
			double t = S(0.5, eps, n, s);
			double b = atanh(0.5);
			Assert::AreEqual(b, t, eps);
		}
	};
}
