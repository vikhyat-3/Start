#include <stdio.h>
#include <stdlib.h>
void pop(int a[],int *top){
	if((*top)==-1)
	{
		printf("Stack empty");
		return;
	}
	(*top)--;
	printf("Item deleted is %d\n",a[(*top)+1]);
}
void push(int a[],int *top,int item){
	if(*top==4)
	{
		printf("Stack full");
		return;
	}
	(*top)++;
	a[*top]=item;
	
}
void display(int a[],int top){
	if(top==-1)
	{
		printf("Stack empty");
		return;
	}
	printf("\nStack elements are: ");
	for(int i=top;i>=0;i--){
		printf("%d ",a[i]);
	}
}
void main(){
	int a[5],top=-1,choice,item;
	for(;;){
		printf("\nPress \n1. Push\n2. Pop\n3. Display\n4. Exit\n");
		scanf("%d",&choice);
		switch(choice){
			
			case 1:	printf("Enter item to be inserted");
					scanf("%d",&item);
					push(a,&top,item);
					break;
			case 2:	pop(a,&top);
					break;
			case 3:	display(a,top);break;
			case 4:	exit(0);
			default: 	printf("\nEnter appropriate choice\n");
		}
	}
}
