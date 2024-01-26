#include<stdio.h>
/**
 * If the ages of Ram, Shyam and Ajay are input through the
 * keyboard, write a program to determine the youngest of the
 * three.
 */
main()
{
	int ram, shyam, ajay;

	printf("Enter the ages of Ram, Shyam, and Ajay: ");
	scanf("%d %d %d", &ram, &shyam, &ajay);

	if(ram > shyam && ajay > shyam)
		printf("Shyam is the Youngest!\n");
	else if (shyam > ajay && ram > ajay)
		printf("Ajay is the Youngest!\n");
	else
		printf("Ram is the Youngest!\n");
}
