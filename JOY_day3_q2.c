#include <stdio.h>
#include <stdlib.h>
void main(){
	int n,k;
	printf("Enter matrix size: ");
	scanf("%d",&n);
	printf("Enter sum: ");
	scanf("%d",&k);
	int*a=(int*)malloc(n*sizeof(int));
	printf("Enter elements: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		printf("%d",a[i]);
	}
	printf("HI%d ",k);
	for(int i=0;i<n;i++){
		int sum=0;
		printf("n");
		for(int j=i;j<n;j++){
		printf("in 2nd loop %d \n",sum);
			if(sum==k)
			{
				printf("The sub array is [");
				for(int p=i;p<=j;p++)
					printf("%d ",a[p]);
				printf("\n");
				printf("Indices range from %d to %d",i,j);
				return;
			}
			else if(sum<k){
				continue;
				sum+=a[j];
				printf("\n%d\n",sum);
			}
			else
				break;
		}
	}
}
	
