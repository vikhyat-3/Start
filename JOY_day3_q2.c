#include <stdio.h>
#include <stdlib.h>
void main(){
	int n,k;
	printf("Enter array size: ");
	scanf("%d",&n);
	printf("Enter sum: ");
	scanf("%d",&k);
	int*a=(int*)malloc(n*sizeof(int));
	printf("Enter elements: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			if(sum==k)
			{
				printf("The sub array is [");
				int p;
				for(p=i;p<j-1;p++)
					printf("%d,",a[p]);
				printf("%d]\n",a[p]);
				printf("Indices range from %d to %d",i,j-1);
				return;
			}
			else if(sum<k)
				sum+=a[j];
			else
				break;
		}
	}
	printf("\nNot possible to obtain the sum");
}
	
