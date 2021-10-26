#include <stdio.h>
#include <stdlib.h>
void main(){
	char a[100];
	gets(a);
	int i=0;
	while(a[i]!='\0')
		i++;
	int j=0;
	while(a[j]==' ')
		j++;
	printf("%c",a[j]);
	char last;
	for(;j<i;j++){
		if(j!=0)
			last=a[j-1];
		if(a[j]==' ')
			printf("%c",a[j+1]);
	}
	printf("\n");
}
