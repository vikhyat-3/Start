#include <stdio.h>
void add(int a,int b,int *c)
{
	*c=a+b;
}
void accept(int *a,int *b)
{
	printf("Enter 2 numbers:\n");
	scanf("%d%d",a,b);
}
void display(int x)
{
	printf("Sum is %d",x);
}
void main()
{
	int a,b,c;
	accept(&a,&b);
	add(a,b,&c);
	display(c);
}
