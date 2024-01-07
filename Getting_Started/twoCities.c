/**
 * The distance between two cities (in km.) is input through the
 * keyboard. Write a program to convert and print this distance
 * in meters, feet, inches and centimeters.
 */
#include <stdio.h>

int main()
{
	float dist, dMeters, dFeets, dInches, dCms;

	printf("Enter The Distance Between the Two Cities in km\n");
	scanf("%f", &dist);

	dMeters = dist * 1000;
	dFeets = dist * 3281;
	dInches = dist * 39370;
	dCms = dist * 100000;

	printf("The distance between the two cities is:\n %.0f Meters\n %.0f Feets\n %.0f Inches\n %.0f Centimeters\n", dMeters, dFeets, dInches, dCms);

}

