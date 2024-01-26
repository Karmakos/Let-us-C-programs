#include<stdio.h>

/**
 * While purchasing certain items, a discount of 10%
 * is offered if the quantity purchased is more than 1000. If quantity
 * and price per item are input through the keyboard, write a program
 * to calculate the total expenses.
 */
main()
{
	int dis, quan, price, total;

	printf("Enter the quantity and price per item (Separated by space):\n");
	scanf("%d %d", &quan, &price);

	total = (quan * price);

	if (quan > 1000)
		total = (quan * price * 90)/ 100;

	printf("The Total expenses: %d\n", total);

}
