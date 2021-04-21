
#include <stdio.h>
#include <stdlib.h>
struct add
{
	int a,b,sum;
};
typedef struct add *ADD;
void accept(ADD p)
{
	printf("Enter two numbers\n");
	scanf("%d%d",&p->a,&p->b);
}
void addition(ADD p)
{
	p->sum=p->a+p->b;
}
void display(ADD p)
{
	printf("SUM is %d\n",p->sum);
}
void main()
{
	ADD x=(ADD)malloc(sizeof(struct add));
	accept(x);
	addition(x);
	display(x);
}








