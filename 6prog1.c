#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char a[30],t[30];
    int h=0,i=0;
    printf("Enter string\n");
    gets(a);
    i=strlen(a);
    for(int j=0;j<i;j++)
    {
        if(a[j]==32)
        {
            t[h]='\0';
            for(int y=strlen(t)-1;y>=0;y--)
            {
                printf("%c",t[y]);
            }
            for(int l=0;l<i;l++)
                t[i]='\0';
            h=0;
            printf(" ");
        }
        else
        {
            t[h++]=a[j];
        }
    }
    t[h]='\0';
    if(h!=0)
    {

            for(int y=strlen(t)-1;y>=0;y--)
            {
                printf("%c",t[y]);
            }
    }

}
