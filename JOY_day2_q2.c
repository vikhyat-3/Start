#include <stdio.h>
#include <stdlib.h>
void main(){
	printf("Enter length of array: ");
	int l,k,contains=0;
	scanf("%d",&l);
	int *a=(int*)malloc(l*sizeof(int));
	printf("Enter sum integer: ");
	scanf("%d",&k);
	printf("Enter array elements: \n");
	for(int i=0;i<l;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			if(a[i]+a[j]==k)
			{
				contains=1;
				if(i>j)
					continue;
				printf("\nIndices are found at %d and %d",i,j);
			}
		}
	}
	if(contains==0)
	{
		printf("\nNo indices found");
	}
}
