/**
 * If the marks obtained by a student in five different subjects
 * are input through the keyboard, find out the aggregate marks
 * and percentage marks obtained by the student. Assume that
 * the maximum marks that can be obtained by a student in each
 * subject is 100.
 */
#include <stdio.h>

int main()
{
	int total, s1, s2, s3, s4, s5;
	float percentage;
	printf("Enter Student Marks for the Five Subjects(separated by space)\n");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

	total = s1 + s2 + s3 + s4 + s5;
	percentage = (total * 100) / 500;

	if (total <= 500)
	{
	printf("The Student Total Score is: %d or %.0f Aggregate Percent\n", total, percentage);

	}
	else
	{
		printf("Invalid Marks\n");
	}
}
