#include <stdio.h>
#include <stdlib.h>
void main(){
	printf("Enter length of array: ");
	int l;
	scanf("%d",&l);
	int *a=(int*)malloc(l*sizeof(int));
	printf("Enter array elements: \n");
	for(int i=0;i<l;i++){
		scanf("%d",&a[i]);
	}
	int *f=(int*)malloc(l*sizeof(int));
	f[0]=a[0];
	int size=1;
	for(int i=1;i<l;i++){
		int j=1;
		while(j<=size){
			if(f[j]==a[i]){
				printf("\nArray not distinct\n");
				return;
			}
			j++;
		}
		f[size++]=a[i];
	}
	printf("\nArray distinct\n");
}
