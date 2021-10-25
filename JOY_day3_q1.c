#include <stdio.h>
#include <stdlib.h>
void main(){
	int n;
	printf("Enter matrix size: ");
	scanf("%d",&n);
	int a[10][10];
	printf("\nEnter the matrix\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n Entered matrix is: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nAnswer is: \n");
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
}
