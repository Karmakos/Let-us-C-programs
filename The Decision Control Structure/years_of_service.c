#include<stdio.h>
/**
 * The current year and the year in which the 
 * employee joined the organization are entered through the 
 * keyboard. If the number of years for which the employee has 
 * served the organization is greater than 3 then a bonus of Rs. 2500/- 
 * is given to the employee. If the years of service are not greater 
 * than 3, then the program should do nothing.
 */
main()
{
	int current_year, y_join, numb_years;

	printf("Enter the current year and year employee joined the organization\n");
	scanf("%d %d", &current_year, &y_join);

	numb_years = current_year - y_join;

	if (numb_years > 3)
	{
		printf("You've received Rs. 2500 bonus\n");
	}
}
