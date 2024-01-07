/**
 * The length & breadth of a rectangle and radius of a circle are
 * input through the keyboard. Write a program to calculate the
 * area & perimeter of the rectangle, and the area &
 * circumference of the circle.
 */
#include <stdio.h>
#include <math.h>

int main()
{
	float l, b, r, area, perimeter;

	printf("Enter the Length, Breadth, and Radius(Separated by Space):\n");
	scanf("%f %f %f", &l, &b, &r);

	perimeter = 2 * (l + b);
	area = 3.1428 * pow(r, 2);

	printf("The Perimeter of the Rectangle is: %.2f\n The Area of the Circle is: %.2f\n", perimeter, area);
}
