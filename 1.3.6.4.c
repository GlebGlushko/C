#include<stdio.h>

int main(void)
{
	int current_february = 28;
	int january = 31;
	int february = 29;
	int april = 30;
	int march = 31;
	int may = 31;
	int july = 31;
	int august = 31;
	int october = 31;
	int december = 31;
	int june = 30;
	int september = 30;
	int november = 30;
	int days_firsthalf_current_year = january + current_february + march + april + may + june;
	int days_firsthalf = january + february + march + april + may + june;
	int days_secondhalf = july + august + september + october + november + december;

	printf("Days in the first half of the current year: %d\n", days_firsthalf_current_year);
	printf("Days in the second half of the current year: %d\n", days_secondhalf);
	printf("Days in the current year(2018): %d\n\n", days_firsthalf_current_year + days_secondhalf);

	printf("Days in the first half of the year:%d\n", days_firsthalf);
	printf("Days in the second half of the year: %d\n", days_secondhalf);
	printf("Days in the year(not current): %d\n", days_firsthalf + days_secondhalf);
	
	return 0;
}
