#include <stdio.h>
#include <stdlib.h>
void main(){
	printf("Enter length of array: ");
	int l;
	scanf("%d",&l);
	int *a=(int*)malloc(l*sizeof(int));
	printf("Enter array elements: \n");
	int *f=(int*)malloc(l*sizeof(int));
	int pointer=0;
	for(int i=0;i<l;i++){
		scanf("%d",&a[i]);
		if(pointer==0){
			f[0]=a[i];
			pointer++;
		}
		else{
			int contains=0;
			for(int j=0;j<pointer;j++){
				if(f[j]==a[i]){
					contains=1;
					break;
				}
			}
			if(contains==0){
				f[pointer++]=a[i];
			}
		}
	}
	printf("\nArray elements are: ");
	for(int i=0;i<pointer;i++){
		printf("%d ",f[i]);
	}
}
