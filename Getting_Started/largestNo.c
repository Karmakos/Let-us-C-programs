/**
 * Find the largest number among the three numbers.
 */

#include<stdio.h>

int main()
{
	int a, b, c;

	printf("Enter Three Numbers (Separated by Space)\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
	{
		printf("%d is the largest.\n", a);
	} else if(b > a && b > c)
	{
		printf("%d is the largest ..\n", b);
	}
	else
	{
		printf("%d is the largest...\n", c);
	}
	return (0);
}
