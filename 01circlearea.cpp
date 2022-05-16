#include<stdio.h>
#define pi 3.14
int main()
{
	float radius ,area;
	printf("enter a value of radius :");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("the area of circle is %f",area);
	return 0;
}
