#include<stdio.h>
/**
 * If cost price and selling price of an item is input through the
 * keyboard, write a program to determine whether the seller has
 * made profit or incurred loss. Also determine how much profit
 * he made or loss he incurred.
 */
main()
{
int cost, sell;

printf("Enter the Cost Price and Selling price ");
scanf("%d %d", &cost, &sell);

if(cost > sell)
	printf("You made a LOSS!\n");
	else
	printf("You made a PROFIT\n");
}
