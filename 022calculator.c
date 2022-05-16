#include<stdio.h>
int main()
{
	int num1,num2,sub, div, mul, add, mod;
	printf("enter a vlaue of num1:");
	scanf("%d",&num1);
	printf("enter a value of num2:");
	scanf("%d",&num2);
	sub=num1-num2;
	div=num1/num2;
	mul=num1*num2;
	add=num1+num2;
	mod=num1%num2;
    printf("the addition is =%d\n",add);
    printf("the subtraction is =%d\n",sub);
	printf("the multiplication is =%d\n",mul);
	printf("the division is =%d\n",div);
	printf("the reminder is =%d\n",mod);
	return 0;
}
