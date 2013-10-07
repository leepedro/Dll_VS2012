#include "simple_dll_c.h"

#include <stdio.h>

int GlobalReturnZero(void)
{
	return 0;
}

void GlobalPrint(void)
{
	printf("This is global Print() function.");
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
	return a / b;
}
