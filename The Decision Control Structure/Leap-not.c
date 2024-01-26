#include<stdio.h>

/**
 * Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.
 * (Hint: Use the % (modulus) operator)
 */
main()
{
	int year;

	printf("Enter Any year: ");
	scanf("%d", &year);

	if (year % 4 == 0)
		printf("The year is a Leap year!\n");
	else
		printf("Its NOT Leap Year\n");
}
