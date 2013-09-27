// MathFuncsDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include "MathFuncsDll.h"

#include <stdexcept>

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		if (b == 0.0)
			throw std::invalid_argument("Second argument must NOT be zero.");
		return a / b;
	}
}
