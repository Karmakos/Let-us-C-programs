#include<stdio.h>

/*
 * Using conditional operators determine whether the character entered through the 
 * keyboard is a lower case alphabet or not.
 */
int main()
{
	char alp;
	printf("Enter any alphabet: ");
	scanf("%c", &alp);

	if(alp >= 65 && alp <= 90)
	{
		printf("The alphabet is Uppercase!");
	}
	if(alp >= 97 && alp <= 122)
	{
		printf("The alphabet is Lowercase!");
	}
}
