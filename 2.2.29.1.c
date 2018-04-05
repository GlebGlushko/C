#include <stdio.h>

int main()
{
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;

	xValue += 3; /* Increment x Value by 3*/
	yValue -= xValue; /* Decrement yValue by xValue*/
	result = xValue * yValue; /* Multiply xValue times yValue giving result*/
	result += result;
	result = --result;
	yValue = result % result;
	result += result + xValue;
	bigResult = result*result*result;
	result += xValue*yValue;

	printf("result: %d\n", result);
	printf("bigResult: %d\n", bigResult);
	return 0;
}

