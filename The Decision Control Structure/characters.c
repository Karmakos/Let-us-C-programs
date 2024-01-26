#include<stdio.h>
/**
Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for
various characters.
Characters 			ASCII Values
A – Z				65 - 90
a – z				97 - 122
0 – 9				48 - 57
special symbols			0 - 47, 58 - 64, 91 - 96, 123 - 127
**/

main()
{
	char character;

	printf("Enter Any Character\n");
	scanf("%c", &character);

	if(character >= 48 && character <= 57)
		printf("The Character %c is a Number!\n", character);
	else if(character >= 65 && character <= 90)
		printf("The Character %c is a Capital Alphabet!\n", character);
	else if(character >= 97 && character <= 122)
		printf("The Character %c is a Lowercase Alphabet!\n", character);
	else if(character >= 0 && character <= 48 || character >= 58 && character <= 64 || character >= 91 && character <= 96 || character >= 123 && character <= 127)
		printf("The Character %c is a Special Symbol!\n", character);
	else
		printf("%c is Invalid Entry!!", character);

}
