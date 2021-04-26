#include <stdio.h>
#include <string.h>
void main()
{
    char a[30],t[30];
    int h=0,i=0;
    printf("Enter string\n");
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("Output is:\n");
    for(int j=0;j<i;j++)
    {
        if(a[j]==32)
        {
            t[h]='\0';
            printf("%s",t);
            printf("\n");
            for(int l=0;l<i;l++)
                t[i]='\0';
            h=0;
        }
        else
        {
            t[h++]=a[j];
        }
    }
    t[h]='\0';
    if(h!=0)
    {
        printf("%s",t);
    }

}

