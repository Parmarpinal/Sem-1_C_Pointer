#include<stdio.h>
void main()
{
	int a;
	int *p;
	printf("Enter no:");
	scanf("%d",&a);
	p=&a;

	printf("value of a=%d",a);
	printf("\nvalue of p=%p",p);
	printf("\nvalue of *p=%d",*p);
	printf("\naddress of a=%p",&a);

}