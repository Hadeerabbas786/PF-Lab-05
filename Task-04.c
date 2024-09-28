#include<stdio.h>

int main()
{
	int age;
	char citizenship;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("Citizenship(Y for yes and N for No): ");
	scanf(" %c", &citizenship);
	
	if(age>=18){
		if(citizenship == 'Y'|| citizenship=='y')
		printf("You are eligable for vote");
		else if(citizenship == 'N'|| citizenship=='n')
		printf("Sorry You are Not Eligable");
		else
		printf("Invalid Input (Y for Yes and N for No)");
		}
	else
	printf("Sorry You are Not Eligable");
	return 0;
	}
	
