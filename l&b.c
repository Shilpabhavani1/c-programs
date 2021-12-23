#include<stdio.h>
void main()
{
	int l,b,a,p;
	printf("enter the length and breadth of the rectangle");
	scanf("%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	printf("area of th rectange of l and b %d",a);
	printf("perimeter of the rectangle of l and b %d",p);
}
