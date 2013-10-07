#include "SimpleDll.h"

#include <stdexcept>
#include <iostream>
#include <limits>

int GlobalReturnZero(void)
{
	return 0;
}

void GlobalPrint(void)
{
	std::cout << "This is global Print() function." << std::endl;
}

double GlobalAdd(double a, double b)
{
	return a + b;
}

double GlobalSubtract(double a, double b)
{
	return a - b;
}

double GlobalMultiply(double a, double b)
{
	return a * b;
}

double GlobalDivide(double a, double b)
{
	if (b == 0.0)
		//throw std::invalid_argument("Second argument must NOT be zero.");
		return std::numeric_limits<double>::max();
	return a / b;
}

namespace NameSpaceA
{
	int NonMemberReturnZero(void)
	{
		return 0;
	}

	void NonMemberPrint(void)
	{
		std::cout << "This is non-member Print() function inside of NameSpaceA namespace." << std::endl;
	}

	double NonMemberAdd(double a, double b)
	{
		return a + b;
	}

	double NonMemberSubtract(double a, double b)
	{
		return a - b;
	}

	double NonMemberMultiply(double a, double b)
	{
		return a * b;
	}

	double NonMemberDivide(double a, double b)
	{
		if (b == 0.0)
			return std::numeric_limits<double>::max();
			//throw std::invalid_argument("Second argument must NOT be zero.");
		return a / b;
	}

	int ClassA::MemberReturnZero(void)
	{
		return 0;
	}

	void ClassA::MemberPrint(void)
	{
		std::cout << "This is Print() function of ClassA class inside of NameSpaceA namespace." << std::endl;
	}

	double ClassA::MemberAdd(double a, double b)
	{
		return a + b;
	}

	double ClassA::MemberSubtract(double a, double b)
	{
		return a - b;
	}

	double ClassA::MemberMultiply(double a, double b)
	{
		return a * b;
	}

	double ClassA::MemberDivide(double a, double b)
	{
		if (b == 0.0)
			throw std::invalid_argument("Second argument must NOT be zero.");
		return a / b;
	}
}

