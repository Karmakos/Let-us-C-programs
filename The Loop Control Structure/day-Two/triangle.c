#include<stdio.h>

/**
 * print a triangle using for loops
 */
main()
{
	int a, b;
	for(a = 1; a <= 10; ++a)
	{
		for(b = 1; b <= a; ++b)
		{
			printf("*");
		
		}
		printf("\n");
	}

}
