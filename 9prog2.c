#include <stdio.h>
#include <stdlib.h>
int* push(int *a,int i,int *t,int *n)
{
    if(*t==(*n-1))
    {
        a=(int*)realloc(a,(sizeof(int))*2*(*n));
        printf("Stack size doubled");
        (*n)=(*n)*2;
        printf("\n%d",a[0]);
    }
    a[++(*t)]=i;
    printf("%d",a[*t]);
    return a;
}
void pop(int *a,int *t)
{
    if(*t==-1)
    {
        printf("Stack Empty");
        return;
    }
    printf("\nItem deleted is %d\n",a[(*t)--]);
}
void display(int *a,int t)
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
int main()
{
    int *a,n=2;
    a=(int*)malloc(sizeof(int)*n);
    int choice,item,top=-1;
    for(;;)
    {
        printf("\n1: Add\n2: Delete \n3: Display\n4: Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter item to be inserted:  ");
                    scanf("%d",&item);
                    a=push(a,item,&top,&n);
                    printf("\n%d\n",top);
                    for(int i=0;i<=top;i++)
                    {
                        printf("%d ",a[i]);
                    }
                    break;

            case 2: pop(a,&top);
                    break;

            case 3: display(a,top);
                    break;

            case 4: exit(0);

            default: printf("\nEnter valid number");
        }
    }
    return 0;
}

