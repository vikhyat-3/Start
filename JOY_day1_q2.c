#include <stdio.h>
#include <stdlib.h>
void main(){
	printf("Enter length of array: ");
	int l,max=-999999999;
	scanf("%d",&l);
	int *a=(int*)malloc(l*sizeof(int));
	printf("Enter array elements: \n");
	for(int i=0;i<l;i++){
		scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
	}
	int *f=(int*)malloc((max+1)*sizeof(int));
	for(int i=0;i<max;i++)
		f[i]=0;
	for(int i=0;i<l;i++){
		f[a[i]]++;
	}
	printf("\nFrequency list is:\n");
	for(int i=0;i<=max;i++){
		if(f[i]!=0)
			printf("%d's : %d\n",i,f[i]);
	}
	
}
