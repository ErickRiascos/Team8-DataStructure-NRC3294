#include "pch.h"
#include "CppUnitTest.h"
#include "../CosenoTaylor/Operaciones.h"
#include "../CosenoTaylor/Operaciones.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CosenoTest
{
	TEST_CLASS(CosenoTest)
	{
	public:

		TEST_METHOD(pot_Test)
		{
			Operaciones s;
			double x = 5;
			int y = 6;
			double z = s.pot(x, y);
			Assert::AreNotEqual(z, 0.0);
		}
		TEST_METHOD(fact_Test)
		{
			Operaciones s;
			int x = 5;
			int y = s.fact(x);
			Assert::AreNotEqual(y, 0);
		}

		TEST_METHOD(radian_Test)
		{
			Operaciones s;
			double x = 5;
			double y = s.radian(x);
			Assert::AreNotEqual(y, 0.0);
		}
		TEST_METHOD(modulo_Test)
		{
			Operaciones s;
			double x = 5;
			double y = s.modulo(x);
			Assert::AreNotEqual(y, 0.0);
		}
	
	};
}
