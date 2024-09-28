#include<stdio.h>

int main()
{
	float a,b;
	printf("Enter the value of a: ");
	scanf("%g",&a);
	printf("Enter the value of b: ");
	scanf("%g",&b);
	
	a>b? printf("(a) %g is Greater",a):printf("(b) %g is Greater",b);
	
	return 0;
}
