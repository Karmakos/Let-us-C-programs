#include<stdio.h>

int main( ) 
{
	int num;

	printf ( "Enter a number less than 10\n" );
	scanf ( "%d", &num );

	if ( num <= 10 )
		printf ( "What an obedient servant you are!\n" ) ; 
	else
		printf("What a scam!");
}
