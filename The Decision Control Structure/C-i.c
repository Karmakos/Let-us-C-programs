#include<stdio.h>
/**
 * Given the length and breadth of a rectangle, write a program to
 * find whether the area of the rectangle is greater than its
 * perimeter. For example, the area of the rectangle with length = 5
 * and breadth = 4 is greater than its perimeter.
 */
main()
{
	int area, perimeter, breadth, length;

	printf("Enter the Breadth and Length of the Lectangle: ");
	scanf("%d %d", &breadth, &length);

	area = breadth * length;
	perimeter = 2*(breadth + length);

	if(area > perimeter)
		printf("The area of the rectangle with length = %d and breadth = %d is greater than its perimeter.\n", length, breadth);
	else if( area == perimeter)
		printf("The perimeter and area of a rectangle with length = %d and Breadth = %d are equal.\n", length, breadth);
	else
		printf("The perimeter of the rectangle with length = %d and breadth = %d is greater than its area. \n", length, breadth);
}
