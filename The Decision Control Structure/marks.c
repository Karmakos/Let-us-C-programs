/**
 * The marks obtained by a student in 5 different 
 * subjects are input through the keyboard. The student gets a 
 * division as per the following rules: 
 * Percentage above or equal to 60 - First division 
 * Percentage between 50 and 59 - Second division 
 * Percentage between 40 and 49 - Third division 
 * Percentage less than 40 - Fail 
 * Write a program to calculate the division obtained by the student.
 */
#include<stdio.h>

main()
{
	int m1, m2, m3, m4, m5;
	float percent;

	printf("Enter Marks For the Five Subjects (Separated by spaces): ");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

	percent = ((m1 + m2 + m3 + m4 + m5) * 100) / 500;

	if(percent >= 60)
		printf("First Division: %.1f\n", percent);
	else
	{
		if(percent >= 50 && percent <= 59)
			printf("Second Division: %.1f\n", percent);
		else
		{
			if(percent >= 40 && percent <= 49)
				printf("Third Division: %.1f\n", percent);
			else
			{
					printf("Fail: %.1f\n", percent);
			}
		}
	}
}
