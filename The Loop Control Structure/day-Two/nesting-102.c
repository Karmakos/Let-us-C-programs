#include<stdio.h>

/**
 * Nesting two for loop functions
 */

main()
{
	int a, b, c;

	for(a = 0; a++ <= 5;)
	{
		for(b = 1; b++ <= 3;)
		{
			c = a + b;
			printf("a = %d b = %d c = %d\n", a, b, c);
		}
	}
}
