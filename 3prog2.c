#include <stdio.h>
void main()
{
    int n,flag=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The prime factors of the number are\n");
    for(int i=1;i<=n;i++)
    {
        flag=0;
        if(n%i==0)
            {
                if(i==1)
                    continue;
                if(i==2)
                {
                    printf("%d ",i);
                    continue;
                }
                for(int j=2;j<=(i/2);j++)
                {
                    if(i%j==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    printf("%d ",i);

            }
    }
}


