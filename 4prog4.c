#include <stdio.h>
void read_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
}
void print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
}
void main()
{
    int a[20],n;
     printf("Enter the number of elements \n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    read_arr(a,n);
    printf("\nElements are: \n");
    print_arr(a,n);
    int key,flag=0,p[20],top=0;
    printf("\nEnter key to be searched: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            p[top++]=i+1;
        }
    }
    if(flag==0)
        printf("\nSearch failure\n");
    else
    {

        printf("\nSearch successful\nThe first occurrence of the key is %d\nThe last occurrence of the key is %d",p[0],p[top-1]);
    }

}
