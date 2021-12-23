#include<stdio.h>
void main()
{
	int r;
	float a,p;
	printf("enter the radius of the circle\n");
	scanf("%d",&r);
	a=3.14*r*r;
	p=2*3.14*r;
	printf("area is=%f and perimeter is %f",a,p);
}
