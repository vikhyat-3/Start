
#include <stdio.h>
void main()
{
	int a;
	printf("Enter number\n");
	scanf("%d",&a);
	int p=0,n;
	while(a>0)
	{
		p=p*10;
		n=a%10;
		p=p+n;
		a=a/10;
	}
	for(;;)
	{
		n=p%10;
		if(n==0)
			break;
		printf("%d ",n);
		p=p/10;
	}

}
