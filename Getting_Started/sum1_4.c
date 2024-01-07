/**
 * If a four-digit number is input through the keyboard, write a
 * program to obtain the sum of the first and last digit of this
 * number.
 */

#include <stdio.h>

int main()
{
	int sum, numb, a, d;

	printf("Enter a Four-Digit Number: \n");
	scanf("%d", &numb);

	a = (numb / 1000);
	d = numb % 10;
	sum = a + d;

	printf("The Sum of the First and Last is: %d\n", sum);
}
