#include<stdio.h>

/**
 * Any integer is input through the keyboard. Write a program to
 * find out whether it is an odd number or even number.
 */
main()
{
	int a;

	printf("Enter a Number:\n");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("The number your enter is EVEN!\n");
	else
		printf("The number you entered is ODD!\n");
}
