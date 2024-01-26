#include<stdio.h>

/**
 * An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male
then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured. **/
main()
{
	int health, age, lives, gender;

	if(health == 1 && age >= "25" && age <= "35" && lives == 1 && gender == "Male")
		printf("You're Insured! The Premium is 200 and Maximum Claim is 4000");
	else if(health == 1 && age >= "25" && age <= "35" && lives == 1 && gender == "Female")
		printf("You're Insured! The Premium is 100 and Maximum Claim is 3000");
	    else if(health == 0 && age >= "25" && age <= "35" && lives == 0 && gender == "Male")
                printf("You're Insured! The Premium is 6000 and Maximum Claim is 1000");
	else
		printf("You're not Insured");

}
