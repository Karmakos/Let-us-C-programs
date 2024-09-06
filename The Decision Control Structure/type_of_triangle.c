#include<math.h>
#include<stdio.h>
/*
 * If the three sides of a triangle are entered through the keyboard,
 * write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.
 */
int main()
{
	int a, b, c;
	printf("Enter the three sides of the triangle: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a == b && b != c || b == c && a != b || a == c && b != c)
	{
		printf("This is an Isosceles Triangle.\n");
	}
	if(a == b && b == c && a == c)
	{
		printf("This is an Equilateral Triangle. \n");
	}
	if(a != b && b != c && a != c)
	{
		printf("This is a Scalene Triangle. \n");
	}
	if(sqrt(pow(a, 2) + pow(b, 2)) == sqrt(pow(c, 2)) || sqrt(pow(c, 2) + pow(b, 2)) == sqrt(pow(a, 2)) || sqrt(pow(a, 2) + pow(c, 2)) == sqrt(pow(b, 2)))
	{
		printf("This is a Right Angled Triangle. \n");
	}
}
