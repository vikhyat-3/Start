#include <stdio.h>
#include<stdlib.h>
void main()
{
	int* a;
	a=(int*)malloc(sizeof(int));
	int* b;
	b=(int*)malloc(sizeof(int));
	int* c;
	c=(int*)malloc(sizeof(int));
	printf("Enter 2 numbers\n");
	scanf("%d%d",a,b);
	*c=*a+*b;
	printf("Sum is %d\n",*c);
}

