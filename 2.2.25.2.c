#include <stdio.h>

int main()
{
		int xValue = 3;
		int yValue = 2;
		int result = ((xValue + yValue) * (2 + yValue));
		int smallResult = ((xValue + yValue)*(4-xValue));

		printf("The result is: %d\n", result);
		printf("The small result is: %d\n", smallResult);

		return 0;
}
