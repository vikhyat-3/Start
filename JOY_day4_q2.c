#include <stdio.h>
#include <stdlib.h>
void main(){
	int a[256];
	for(int i=0;i<256;i++)
		a[i]=0;
	char b[100];
	gets(b);
	int i=0;
	int max=-1;
	char max_c;
	while(b[i]!='\0'){
		if(b[i]==' '){
			i++;
			continue;
		}
		int y=b[i];
		a[y]=a[y]+1;
		if(a[y]>=max)
		{
			max=a[y];
			max_c=b[i];
			printf("%c",max_c);
		}
		i++;
	}
	printf("\n Most frequent character is %c with count of %d\n",max_c,max);
}
