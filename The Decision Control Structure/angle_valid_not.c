#include <stdio.h>
/*
 * write a program to check whether a triangle is valid or not 
 * when the angles of the triangleare entered throught the keyboard.
 */
int main()
{
	int a,b,c,sum;
	printf("Enter the three angles: ");
	scanf("%d %d %d", &a, &b, &c);
	
	sum=a+b+c;
	
	if(sum==180)
		printf("The triangle is valid");
	else
		printf("The anle is not valid");
}
