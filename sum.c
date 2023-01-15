#include<stdio.h>
void main()
{
	int a,b,sum;
	int *p;
	int *q;
	printf("Enter no1:");
	scanf("%d",&a);
	printf("Enter no2:");
	scanf("%d",&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("sum=%d",sum);
}