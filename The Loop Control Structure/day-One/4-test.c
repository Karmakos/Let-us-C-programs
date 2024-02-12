#include<stdio.h>

/**
 * indefinite loop
 */
main()
{
	int i;
	while(i <= 32767)
	{
		printf("%d\n", i);
		i = i+1;
	}
}
