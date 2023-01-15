#include<stdio.h>
void swap(int *a,int *b);

void main()
{
	int a,b;
	printf("Enter no1:");
	scanf("%d",&a);
	printf("Enter no2:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Value of a=%d",a);
	printf("\nValue of b=%d",b);
}

 void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

