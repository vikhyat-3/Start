
#include <stdio.h>
void main()
{
	int a,n,p,e=0,o=0;
	scanf("%d",&a);
	int even[10],odd[10];
	while(a>0)
	{
		p=p*10;
		n=a%10;
		p=p+n;
		a=a/10;
	}
	while(p!=0)
	{
		n=p%10;
		if(n%2==0)
			even[e++]=n;
		else
			odd[o++]=n;
		p=p/10;
	}
	printf("\nEven numbers are: ");
	for(int i=0;i<e-1;i++)
		printf("%d",even[i]);

	printf("\nOdd numbers are: ");
	for(int i=0;i<o-1;i++)
		printf("%d",odd[i]);


}

