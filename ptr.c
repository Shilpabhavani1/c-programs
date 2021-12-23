#include<stdio.h>
void main()
{
	int inter,princ,rate,time;
	
	
	scanf("%d%d%d",&princ,&time,&rate);
	inter=(princ*time*rate);
	
	printf("simple interest value is %d",inter);
}
