#include <stdio.h>

int main()
{
	int p, t;
	float si, r;

	printf("Enter the Principle, Time, and Rate\n");
	scanf("%d %d %f", &p, &t, &r);

	si = p * t * (r/100);
	printf("%f\n", si);
}
