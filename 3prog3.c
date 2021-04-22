#include <stdio.h>
void main()
{
    int n,a[5],p,j=0,sum=0;
    printf("Enter number");
    scanf("%d",&n);
    int g=n;
    for(;;)
    {
        if(g==4)
            break;
        j=0,sum=0;
        while(g>0)
        {
            p=g%10;
            a[j++]=p;
            g=g/10;
        }
        for(int y=0;y<j;y++)
        {
            sum=sum+((a[y])*(a[y]));
        }
        if(sum==1)
        {
            printf("%d is a Happy number",n);
            break;
        }
        g=sum;
    }
    if(sum!=1)
        printf("%d is not a happy number",n);

}
