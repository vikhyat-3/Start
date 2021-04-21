
#include <stdio.h>
void accept(int *a,int *b);
void add(int a,int b,int *c);
void display(int c);
void main()
{
	int a,b,c;
	accept(&a,&b);
	add(a,b,&c);
	display(c);
}
void accept(int *a,int *b)
{
	printf("Enter two numbers\n");
	scanf("%d%d",a,b);
}

void add(int a,int b,int *c)
{
	*c=a+b;
}
void display(int c)
{
	printf("Sum is %d\n",c);
}
