/**
 * A cashier has currency notes of denominations 10, 50 and
 * 100. If the amount to be withdrawn is input through the
 * keyboard in hundreds, find the total number of currency notes
 * of each denomination the cashier will have to give to the
 * withdrawer.
 */
#include<stdio.h>

int main()
{
	int amount, hundreds, fifties, tens;

	printf("Enter the Amount You'd Like to WIthdraw: \n");
	scanf("%d", &amount);

	hundreds = amount / 100;
	fifties = amount / 50;
	tens = amount / 10;

	printf("You Will Receive: \n %d Hundreds \n %d Fifties \n %d Tens \n", hundreds, fifties, tens);
}
