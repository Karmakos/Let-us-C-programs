#include<stdio.h>

/**
 * nesting two for loops
 */

main()
{
	int a, b, c;

	a = 1;

	while(a <= 5)
	{
		b = 1;
		while(b <= 2)
		{
			c = a + b;
			printf("a = %d b = %d c = %d\n", a, b, c);
			b++;
		}
		a++;

	}
}
