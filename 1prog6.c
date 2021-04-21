
#include <stdio.h>
struct add
{
	int a,b,sum;
}x;
void main()
{
	printf("Enter two numbers\n");
	scanf("%d%d",&x.a,&x.b);
	x.sum=(x.a+x.b);
	printf("Sum is %d\n",x.sum);
}

