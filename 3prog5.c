#include <stdio.h>
void main()
{
    int n,a[15],j=-1;
    printf("Enter number: ");
    scanf("%d",&n);
    int p=n;
    while(p>0)
    {
        a[++j]=p%2;
        p=p/2;
    }
    printf("\nThe binary form of %d is \n",n);
    for(int i=j;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
