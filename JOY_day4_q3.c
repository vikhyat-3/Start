#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
	char a[100],b[100];
	gets(a);
	int l=0,i=0;
	printf("Enter string 2");
	gets(b);
	while(a[l]!='\0')
		l++;
	int lp=0,flag=0,dlp=0;
	while(i!=l){
		dlp=lp;
		int alp=0;
		for(;alp<l;alp++)
		{
			if(a[alp]==b[lp]){
				lp=(lp+1)%l;
			}
			else
				break;
		}
		if(alp==l){
			printf("They are rotations of each other\n");
			return;
		}
		lp=dlp+1;
		i++;
	}
	printf("They are not rotations of each other");
}
