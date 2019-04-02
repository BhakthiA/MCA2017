#include<stdio.h>
void main()
{
int fact=1,n,i;
printf("Enter the Number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("Factorail of n is:%d",fact);
}


