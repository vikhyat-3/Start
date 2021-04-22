#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factors of the number are\n");
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
}
