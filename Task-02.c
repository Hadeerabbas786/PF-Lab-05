#include<stdio.h>

int main()
{
	int number;
	
	printf("Enter any number:");
	scanf("%d",&number);
	
	if(number<0)
	printf("Number is negative");
	else if(number==0)
	printf("Number is Zero");
	else{
		if (number % 2==0)
		printf("Number is Even");
		else
		printf("Number is Odd");
	}
return 0;	
}
