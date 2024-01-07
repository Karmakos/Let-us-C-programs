/**
 * If a five-digit number is input through the keyboard, write a
 * program to calculate the sum of its digits.
 * (Hint: Use the modulus operator ‘%’)
 */
#include <stdio.h>

int main()
{
	int sum, numb, a, b, c, d, e;

	printf("Enter a Five-Digit Number: \n");
	scanf("%d", &numb);

	e = numb % 10;
	d = (numb % 100) / 10;
	c = (numb % 1000) / 100;
	b = (numb % 10000) / 1000;
	a = numb / 10000;

	sum = a + b + c + d + e;
	printf("The Sum of The Five Digits is: %d \n", sum);


}

