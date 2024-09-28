#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if (age<0)
	printf("Invalid Input");
	else if (age<12)
	printf("You are Child");
	else if (age<18)
	printf("You are Teenager");
	else if (age<65)
	printf("You are Adult");
	else
	printf("You are Senior");

	
	return 0;
	
}
