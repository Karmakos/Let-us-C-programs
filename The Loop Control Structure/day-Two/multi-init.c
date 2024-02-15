#include<stdio.h>

/**
 * Initializing two or more valubales in for loop
 */
main()
{
	int i, j;

	for(i = 0, j = 10; i <= j; i++, j--)
		printf("%d  %d\n", i, j);
}
