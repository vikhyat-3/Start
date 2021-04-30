#include <stdio.h>
#include <stdlib.h>
void push(int a[],int i,int *t)
{
    a[++(*t)]=i;
}
void pop(int a[],int *t)
{
    printf("\nItem deleted is %d\n:",a[(*t)--]);
}
void display(int a[],int t)
{
    if(t==-1)
    {
        printf("Empty Stack");
        return;
    }
    printf("\nElements are: \n");
    for(int i=0;i<=t;i++)
    {
        printf("%d ",a[i]);
    }
}
void main()
{
    int a[30],choice,item,top=-1;
    for(;;)
    {
        printf("\n1: Add\n2: Delete \n3: Display\n4: Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter item to be inserted:  ");
                    scanf("%d",&item);
                    push(a,item,&top);
                    break;

            case 2: pop(a,&top);
                    break;

            case 3: display(a,top);
                    break;

            case 4: exit(0);

            default: printf("\nEnter valid number");break;
        }
    }
}
