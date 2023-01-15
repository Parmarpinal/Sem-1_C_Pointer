#include<stdio.h>
void main()
{
	int a[5],i;
	int *p;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a;
	for(i=0;i<5;i++)
	{
		printf("\n%d",*p);
		p++;
	}

}