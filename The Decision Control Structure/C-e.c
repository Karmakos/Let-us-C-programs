#include<stdio.h>
/**
 * A five-digit number is entered through the keyboard. Write a 
 * program to obtain the reversed number and to determine 
 * whether the original and reversed numbers are equal or not.
 */
main()
{
	int numb, one, two, three, four, five, reverse;

	printf("Enter a five-digit number: ");
	scanf("%d", &numb);

	five = numb % 10;
	four = (numb % 100)/10;
	three = (numb % 1000)/100;
	two = (numb % 10000)/1000;
	one = numb / 10000;

	printf("%d%d%d%d%d\n", five, four, three, two, one);

	if(five == one && four == two && three == three && two == four && one == five)
	{
		printf("The Number You Entered and Its reverse are EQUAL\n");
	}
	else
		printf("The Two numbers are NOT equal\n");


}
