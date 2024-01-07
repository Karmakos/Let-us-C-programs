/**
 * Two numbers are input through the keyboard into two
 * locations C and D. Write a program to interchange the
 * contents of C and D.
 */

#include <stdio.h>

int main()
{
	int a, b, c, d;

	printf("Enter Two Characters (Separated by Space): \n");
	scanf("%d %d", &a, &b);

	c = a;
	d = b;
	printf("The first Value is: %d\n The Second Value is: %d\n", d, c);


}
