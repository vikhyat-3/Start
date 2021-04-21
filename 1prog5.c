
#include <stdio.h>
#include<stdlib.h>
int create()
{
	int p=(int)malloc(sizeof(int));
	return p;
}
void main()
{
	int a;
	int b;
	int c;
	a=create();
	b=create();
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	c=create();
	c=a+b;
	printf("Sum is %d\n",c);
}
