#include<stdio.h>
void main()
{
	int min,hour,time;
	printf("enter the time");
	scanf("%d",&time);
	hour=time/60;
	min=time%60;
	printf("given time is %d is equal to hour%d min%d",time,hour,min);

}
