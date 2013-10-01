// This file calls DLL created by SimpleDll project.

#include <iostream>

#include "../SimpleDll/SimpleDll.h"

int main(void)
{
	double a = 7.4;
	int b = 99;

	NameSpaceA::ClassA::MemberReturnZero();
	NameSpaceA::ClassA::MemberPrint();
	std::cout << "a + b = " << NameSpaceA::ClassA::MemberAdd(a, b) << std::endl;
	std::cout << "a - b = " << NameSpaceA::ClassA::MemberSubtract(a, b) << std::endl;
	std::cout << "a * b = " << NameSpaceA::ClassA::MemberMultiply(a, b) << std::endl;
	std::cout << "a / b = " << NameSpaceA::ClassA::MemberDivide(a, b) << std::endl;

	NameSpaceA::NonMemberReturnZero();	// LNK2019 Why?
	NameSpaceA::NonMemberPrint();
	std::cout << "a + b = " << NameSpaceA::NonMemberAdd(a, b) << std::endl;
	std::cout << "a - b = " << NameSpaceA::NonMemberSubtract(a, b) << std::endl;
	std::cout << "a * b = " << NameSpaceA::NonMemberMultiply(a, b) << std::endl;
	std::cout << "a / b = " << NameSpaceA::NonMemberDivide(a, b) << std::endl;

	GlobalReturnZero();
	GlobalPrint();
	std::cout << "a + b = " << GlobalAdd(a, b) << std::endl;
	std::cout << "a - b = " << GlobalSubtract(a, b) << std::endl;
	std::cout << "a * b = " << GlobalMultiply(a, b) << std::endl;
	std::cout << "a / b = " << GlobalDivide(a, b) << std::endl;

	try
	{
		std::cout << "a / 0 = " << NameSpaceA::ClassA::MemberDivide(a, 0) << std::endl;
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Unexpected exception!" << std::endl;
	}

	try
	{
		std::cout << "a / 0 = " << NameSpaceA::NonMemberDivide(a, 0) << std::endl;
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Unexpected exception!" << std::endl;
	}

	try
	{
		std::cout << "a / 0 = " << GlobalDivide(a, 0) << std::endl;
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
