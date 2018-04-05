/*Simple Interest Equation
 * A = P(1+rt)
 * Where:
 * A= Total Accrued Amount (principal + interest)
 * P= Principal Amount
 * r= Rate of Interest per year in decimal r= R/100
 * R= Rate of Interest per year as a percent R = r * 100
 * t= Time Period involved in months or year */

#include <stdio.h>

int main()
{
	float startValue = 100;
	float interestRate = 0.015; /*r= 1,5/100 --> 1,5% anual*/ 
	float firstYearValue;
	float secondYearValue;
	float thirdYearValue;
	
	firstYearValue= startValue*(1+interestRate*1);
	secondYearValue= startValue*(1+interestRate*2);
	thirdYearValue= startValue*(1+interestRate*3);
	
	printf("After first year: %f\n", firstYearValue);
	printf("After second year: %f\n", secondYearValue);
	printf("After third year: %f\n", thirdYearValue);

	return 0;
}

