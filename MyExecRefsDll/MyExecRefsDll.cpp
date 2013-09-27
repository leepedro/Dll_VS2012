// An example from MSDN web site.
// This project calls the DLL created by MathFuncsDll project.

// MyExecRefsDll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "../MathFuncsDll/MathFuncsDll.h"

int _tmain(int argc, _TCHAR* argv[])
{
	double a = 7.4;
	int b = 99;

	std::cout << "a + b = " << MathFuncs::MyMathFuncs::Add(a, b) << std::endl;
	std::cout << "a - b = " << MathFuncs::MyMathFuncs::Subtract(a, b) << std::endl;
	std::cout << "a * b = " << MathFuncs::MyMathFuncs::Multiply(a, b) << std::endl;
	std::cout << "a / b = " << MathFuncs::MyMathFuncs::Divide(a, b) << std::endl;

	try
	{
		std::cout << "a / 0 = " << MathFuncs::MyMathFuncs::Divide(a, 0) << std::endl;
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Unexpected exception!" << std::endl;
	}
	return 0;
}

