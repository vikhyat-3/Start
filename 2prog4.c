#include <stdio.h>
#include<stdlib.h>
void main()
{
	int a,j,k;
	scanf("%d",&a);
	if(a<=2)
		printf("NOT PRIME");
	for(int i=2;i<(a/2);i++)
	{
		if(a%i==0)
		{
			printf("NOT A PRIME!");
			exit(0);
		}
	}
	printf("PRIME");

}
