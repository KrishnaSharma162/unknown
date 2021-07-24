#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);
	
	if (a%2 == 0)
	printf("Number is even = %d", a);
	
	else 
	printf("Number is odd = %d", a);
	
	return 0;  
}
