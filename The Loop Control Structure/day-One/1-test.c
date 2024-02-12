#include<stdio.h>

/**
 * Test if a number is less than 10.
 */

main()
{
	int i;
	printf("Enter a Number\n");
	scanf("%d", &i);

	while(i<=15)
	{
		printf("%d is  less than 15\n", i);
		i = i + 1;
	}
}
