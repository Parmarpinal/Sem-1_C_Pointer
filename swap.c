#include<stdio.h>
void main()
{
	int a,b,c;
	int *p;
	int *q;
	int temp;
	printf("Enter no1:");
	scanf("%d",&a);
	printf("Enter no2:");
	scanf("%d",&b);
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("value of a=%d",a);
	printf("\nvalue of b=%d",b);
}
