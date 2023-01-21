#include<stdio.h>
#define pi 3.412
int main()
{
	float radius,area;
	printf("\n enter the radius :");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("\n the area is %f",area);

    return 0;
}