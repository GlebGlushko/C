#include<stdio.h>

int main(void)
{
		int dayOfWeek = 1;
	    char  day1[7]={'M','o','n','d','a','y','\0'}; /*Strings[one more than the number of characters in the word]*/
		if(dayOfWeek == 1)
				printf("The day of the week is: %s\n ", day1);
		return 0;
	}
