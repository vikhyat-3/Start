#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[10],n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements in the array: \n");
    int max=-2147483647,max_index=-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }
    }
    printf("\nThe largest element is %d\nThe elements before largest elements are: \n",max);
    for(int i=0;i<n;i++)
    {
        if(i<max_index)
        {
            printf("%d ",a[i]);
        }
        else if(i==max_index)
                printf("\nThe elements after largest elements are: \n");
        else
            printf("%d ",a[i]);

    }
}
