/**
 * If a five-digit number is input through the keyboard, write a
 * program to print a new number by adding one to each of its
 * digits. For example if the number that is input is 12391 then
 * the output should be displayed as 23402.
 */

#include<stdio.h>

int main()
{
	int numb, a, b, c, d, e;

	printf("Enter a Five-Digit Number: \n");
	scanf("%d", &numb);

	e = (numb % 10) + 1;
	d = (numb % 100)/ 10 + 1;
	c = (numb % 1000)/ 100 + 1;
	b = (numb % 10000)/ 1000 + 1;
	a = (numb / 10000) + 1;

	printf("The New Number is: %d%d%d%d%d \n", a, b, c, d, e);
}
