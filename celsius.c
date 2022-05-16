#include<stdio.h>
int main()
{
	float farhenheit;
	float celsius;
	printf("enter a farhenheit:");
	scanf("%d",&farhenheit);
	celsius=(farhenheit-32)*5/9;
	printf("celcius=%0.3f",celsius);
	return 0;
	
}
