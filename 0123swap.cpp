#include<stdio.h>
int main()
{
	int a,b;
	int temp;
	printf("enter the value of a and b:");
	scanf("%d %d",&a, &b);
	printf("before swapping:\n");
	printf("before swap a=%d and b=%d \n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping:\n");
	printf("after swap a=%d and b=%d",a,b);
	return 0;
}
