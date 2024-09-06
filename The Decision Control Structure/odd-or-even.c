#include<stdio.h>
 /*
  * Any integer is input through the keyboard. 
  * Write a program that find out whether it is an odd number or even number
  */
int main()
{
	int num;

	printf("Write any number:");
	scanf("%d", &num);

	if(num % 2 == 0)
	{
		printf("The Number is Even");
	}
	else
		printf("The number is Odd");
}
