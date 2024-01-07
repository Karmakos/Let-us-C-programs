/**
 * Temperature of a city in Fahrenheit degrees is input through
 * the keyboard. Write a program to convert this temperature
 * into Centigrade degrees.
 */
#include <stdio.h>

int main()
{
	float fahrenheit, degrees;

	printf("Enter the Temperature in Fahrenheit:\n");
	scanf("%f", &fahrenheit);

	degrees = (5 * (fahrenheit - 32)) / 9;
       printf("The Temperature in Degrees Celsius is: %.2f\n", degrees);	
}
