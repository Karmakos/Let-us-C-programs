#include<stdio.h>

/**
 * calculating a simple interest.
 */

main()
{
	int p, n, count;
	float r, si;

	for(count = 1; count <= 3; count = count + 1)
	{
		printf("Enter the Principal, years, and rate\n");
		scanf("%d %d %f", &p, &n, &r);

		si = p * n * r/ 100;
		printf("Simple Interest = KES.  %.2f\n", si);
	}
}