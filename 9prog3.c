#include <stdio.h>
#define Size 5

void main()
{
    int a[Size];
    int r=-1,choice,ele,f=0;
    for(;;)
    {

        printf("\n1:insert\n2:delete\n3:display\n4:exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter element to be inserted\n");
                    scanf("%d",&ele);
                    insert(a,ele,&r);
                    break;
            case 2: delete(a,&f,&r);break;
            case 3: display(a,f,r);break;
            case 4: exit(0);
        };
    }
    return;
}
void insert(int a[],int item,int *r)
{
	if(*r==Size-1)
	{
		printf("Q full\n");
		return;
	}
	*r=*r+1;
	a[*r]=item;
}
void delete(int a[],int *f,int *r)
{
	if(*f>*r)
	{
		printf("Q empty\n");
		return;
	}

	printf("\nItem deleted is: %d\n",a[*f]);
	(*f)++;
}
void display(int a[],int f,int r)
{
	int i;
	if(f>r)
	{
		printf("Q empty\n");
		return;
	}
	for(i=f;i<=r;i++)
	{
		printf("%d\t",a[i]);
	}
}
