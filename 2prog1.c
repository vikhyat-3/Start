#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	int n=-1;
	for(;;)
	{
		n=a%10;
		if(n==0)
			break;
		printf("%d ",n);
		a=a/10;
	}

}

