#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int length(char a[])
{
    int i=1;
    while(a[i]!='\0')
        i++;

    return i;
}
const char* subString(int a,int b, char c[])
{
    char *p;
    int i=0;
    for(;a<=b;a++)
    {
        printf("%d",a);
        p[i++]=c[a];
    }
    p[i]='\0';
    return p;
}
void concat(char a[],char b[])
{
    int i=length(a),j=0;
    while(i<(length(a)+length(b)))
    {
        a[i++]=b[j++];
    }
}
void cmp(char a[],char b[])
{
    int i=0,j=0;
    if(length(a)==length(b))
    {
        while(i<length(a))
        {
            if(a[i]!=b[i])
            {
                j=1;
                break;
            }
            i++;
        }
        if(j==0)
            {
                printf("\nEqual strings\n");
                return;
            }
        else
            {

                printf("\nUnequal strings\n");
                return;
            }
    }
    else
            {

                printf("\nUnequal strings\n");
                return;
            }
}
void main()
{
    char a[20],b[20];
    printf("Enter first string");
    gets(a);
    printf("Enter second string");
    gets(b);
    printf("%d and %d",length(a),length(b));
    cmp(a,b);
    concat(a,b);
    printf("\n%s",a);
    printf("\n%s\n",subString(0,3,a));

}
