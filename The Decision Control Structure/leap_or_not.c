#include<stdio.h>

/* Any year is input through the keyboard.
 * Write a program to determine whether the year is a leap year or not
 * (Hint: Use the %  operator)
 */

int main()
{
	int year;

	printf("Enter any year: ");
	scanf("%d", &year);

	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("You entered a leap year!");
	}
	else
		printf("It is not a leap year!");
}
