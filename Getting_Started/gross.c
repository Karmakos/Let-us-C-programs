/**
 * Ramesh’s basic salary is input through the keyboard. His
 * dearness allowance is 40% of basic salary, and house rent
 * allowance is 20% of basic salary. Write a program to calculate
 * his gross salary.
 */

#include <stdio.h>

int main()
{
	float bSalary, gross, allowances;

	printf("Enter Ramesh's Basic Salary\n");
	scanf("%f", &bSalary);

	allowances = ((40*bSalary)/100)+((20*bSalary)/100);
	gross = bSalary + allowances;
	printf("Ramesh Gross Salary is: %.0f\n", gross);


}

