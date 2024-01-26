/**
 * A company insures its drivers in the following cases:
 * − If the driver is married.
 * − If the driver is unmarried, male & above 30 years of age.
 * − If the driver is unmarried, female & above 25 years of age.
 * In all other cases the driver is not insured. If the marital status, sex and age of the driver are the inputs, 
 * write a program to determine whether the driver is to be insured or not.
 */
#include<stdio.h>

main()
{
	char sex, mar;
	int age;

	printf("Enter the Age, Sex(M or F), and Marital Status (M (Married) or U (Unmarried)): \n");
	scanf("%d %c %c", &age, &sex, &mar);

	if (mar == 'M')
		printf("You're Insured\n");
	else
	{
		if (sex == 'M' && age >= 30 )
		printf("You're Insured\n");
		else
		{
		if (sex == 'F' && age >= 25)
		printf("You're Insured \n");
		else
		printf("You're Not Insured\n");
		}
	}
}
