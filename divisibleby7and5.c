#include<stdio.h>
void main()
{
int x;
printf("enter a number");
scanf("%d",&x);
if(x%7==0 && x%5==0)
{
	printf("yes");
}

else
{
	printf("no");
}
}
