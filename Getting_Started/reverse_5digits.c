/**
 * If a five-digit number is input through the keyboard, write a
 * program to reverse the number.
 */

#include <stdio.h>

int main()
{
	int numb, a, b, c, d, e;

	printf("Enter The Five Digit Number: \n");
	scanf("%d", &numb);

	e = numb % 10;
	d = (numb % 100) / 10;
	c = (numb % 1000) / 100;
	b = (numb % 10000) / 1000;
	a = numb / 10000;

	printf("The Number You Entered Reversed is: %d%d%d%d%d \n", e, d, c, b, a);

}
