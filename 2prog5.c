
#include <stdio.h>
#include<stdlib.h>
void main()
{
	int a,k=0;
	printf("Enter upper limit");
	scanf("%d",&a);
	for(int i=2;i<=a;i++)
	{
		k=0;
		for(int j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				k=1;
			}
		}
		if(k==0)
			printf(" %d ",i);
	}
}
