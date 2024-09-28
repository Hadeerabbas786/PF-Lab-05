#include<stdio.h>

int main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);
	
	(num>0)? printf("%d is Positive",num): 
	(num<0)? printf("%d is Negative",num):
	printf("%d is Zero",num);
	
	return 0;
} 
