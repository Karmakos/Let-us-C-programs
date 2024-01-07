/**
 * If the total selling price of 15 items and the total profit earned
 * on them is input through the keyboard, write a program to
 * find the cost price of one item.
 */

#include<stdio.h>

int main()
{
	int sell, profit;
       float cost_item;

	printf("Enter the Total Selling Price and Profit: \n");
	scanf("%d %d", &sell, &profit);

	cost_item = (float) (sell - profit) / 15;

	printf("The Cost per Items is: %.2f \n", cost_item);
}
