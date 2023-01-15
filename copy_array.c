#include<stdio.h>
void main()
{
	int a[5],b[5],i;
	int *p,*q;
	printf("Enter 1st array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a;
	q=&b;
	*q=*p;
	for(i=0;i<5;i++)
	{
		
		printf("\n%d",*q);
		q++;
	}
}
