#include<stdio.h>

main()
{
	float a = 10.0;
	while(a <= 10.5)
	{
		printf("%f", a);
		printf("\nRaindrops on roses...");
		printf("...and whiskers on kittens\n");
		a = a + 0.1;
	}
}
