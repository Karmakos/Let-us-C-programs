#include<stdio.h>
/*
 * If ages of Ram, Shyam, and Ajay are input through the keyboard
 * Write a program to determine the youngest of the three
 */
int main()
{
	int ram, shyam, ajay;

	printf("Enter the three ages of Ram, Shyam, and Ajay(sperated by spaces):");
	scanf("%d %d %d", &ram, &shyam, &ajay);

	if(ram < shyam && ram < ajay )
		printf("Ram is the Youngest");
	if(shyam < ram && shyam < ajay)
		printf("Shyam is the Youngest");
	else
		printf("Ajay is the youngest");
}
