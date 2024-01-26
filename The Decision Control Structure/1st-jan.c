#include<stdio.h>

/**
 * According to the Gregorian calendar, it was Monday on the
 * date 01/01/1900. If any year is input through the keyboard
 * write a program to find out what is the day on 1st January of
 * this year.
 */
main()
{
	int year;

	printf("Enter the Year: ");
	scanf("%d", &year);

	if(year % 4 == 0)
		printf("1st January of %d was on Monday\n", year);
	else if(year % 4)
		printf("1st January of %d was on Sunday\n", year);
}
